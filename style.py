#!/usr/bin/env python3

from pygments import highlight
from pygments.formatters import LatexFormatter
from pygments.lexers.c_cpp import CppLexer
from pygments.style import Style
from pygments.token import (Keyword, Name, Comment, String,
     Number, Operator, Punctuation)

import sys

class CodeblocksStyle(Style):
    default_style = ""
    styles = {
        Comment:          '#a1a1e0',
        Comment.Preproc:  '#31813f',  # Why is this under comments ??
        Keyword:          'bold #00a',
        Operator:         '#ff0505',
        Punctuation:      '#ff0505',
        Name:             '#0e0e0e',
        String:           '#2828ff',
        Number:           '#f007f0',
    }

highlight(sys.stdin.read(), CppLexer(),
          LatexFormatter(style=CodeblocksStyle, full=False), sys.stdout)
