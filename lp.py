#!/usr/bin/env python3

# LaTeX Preprocessor
# Process a LaTeX source file with the following custom tags:

# %#template path/to/template.tex -- Process this file as a subtemplate.
#     This must be the first line of the file.

# %#block blockname -- Begin block definition. Subtemplates can override
#     their template's blocks with this directive.

# %#endblock -- End block definition. Blocks cannot be nested.

# %#insert shell_command -- This line is replaced with the output
#     of shell_command


import argparse
import os
import subprocess


def find_first_symbol(s):
    """Find first symbol in string s. This is the first word, unless it's
    dobule-quoted, in which case it's everything until the end of the quote."""
    if s[0] == '"':
        try:
            idx = s.index('"', 1)
            return s[1:idx]
        except ValueError:
            print(f"Could not find endquote for quoted text {s[:20]}...")
            quit(1)

    else:
        return s.split()[0]


def find_blocks(filecontent):
    """Find %#block and %#endblock directives in content.
    Return a dictionary of their names and contents."""

    blockname = None
    content = ""
    blocks = {}
    for ln in filecontent.split("\n"):
        stripped = ln.strip()
        if stripped.startswith("%#block "):
            l = len("%#block ")
            blockname = find_first_symbol(stripped[l:])

        elif stripped.startswith("%#endblock"):
            if blockname is None:
                print("%#endblock without %#block.")
                quit(1)

            blocks[blockname] = content
            blockname = None
            content = ""

        elif blockname is not None:
            content += ln + "\n"

    return blocks


def replace_blocks(content, blocks):
    """Replace blocks in content with data from blocks. Return new content."""

    out_content = ""
    suppress = False

    for ln in content.split("\n"):
        stripped = ln.strip()
        if stripped.startswith("%#block "):
            l = len("%#block ")
            blockname = find_first_symbol(stripped[l:])
            if blockname in blocks:
                suppress = True
                out_content += ln + "\n"
                out_content += blocks[blockname]
            else:
                out_content += ln + "\n"
        elif stripped.startswith("%#endblock") and suppress:
            out_content += ln + "\n"
            suppress = False
        elif not suppress:
            out_content += ln + "\n"

    return out_content


def replace_inserts(content):
    """Replace %#insert directives with their corresponding values."""
    out_content = ""
    for ln in content.split("\n"):
        stripped = ln.strip()
        if stripped.startswith("%#insert "):
            l = len("%#insert ")
            out_content += \
                subprocess.check_output(stripped[l:], shell=True).decode() + "\n"
        else:
            out_content += ln + "\n"
    return out_content


def process_file(filename):
    """Process filename, return string of content to be compiled."""
    with open(filename) as f:
        content = f.read()

    # if this file depends on a template, process that first
    if content.startswith("%#template "):
        l = len("%#template ")
        template_name = find_first_symbol(content[l:])
        template_content = process_file(template_name)

        # replace blocks in template with blocks in subtemplate (filename)
        # ignore everything else in the subtemplate
        subtemplate_blocks = find_blocks(content)

        content = replace_blocks(template_content, subtemplate_blocks)

    return replace_inserts(content)


def process_and_compile(filename, inhibit_clean=False):
    content = process_file(filename)

    new_filename = filename.replace(".tex", ".p.tex")
    if new_filename == filename:
        # don't override the old file
        new_filename = new_filename + ".p"
    
    with open(new_filename, "w") as f:
        f.write(content)

    os.system(f"pdflatex {new_filename}")

    # clean up after ourselves
    if not inhibit_clean:
        os.remove(new_filename)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog="lp.py")
    parser.add_argument("filename", help="The file to be processed.")
    parser.add_argument(
        "--inhibit-clean",
        help="Inhibit cleaning of intermediary file",
        action="store_const",
        const=True,
        default=False
    )
    args = parser.parse_args()

    process_and_compile(args.filename, args.inhibit_clean)
