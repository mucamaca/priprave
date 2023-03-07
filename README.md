## Navodila za uporabo template sistema

Nova poglavja dodajaj v podmapo `chapters/`. Datoteka naj izgleda tako:

```latex
%#template templates/template.text

%#block title
Naslov poglavja
%#endblock

%#block content
Tu piši vse kar želiš napisati. Uporabljaj \LaTeX{} kodo,
kakor običajno. Na voljo imaš vse, kar je bilo na voljo v starih
templatih.

Če želiš vključiti del kode, napiši:
%#insert python3 style.py < chapters/ime-poglavja/datoteka.cpp
kjer je to dejansko obstoječa datoteka.

% Na splošno lahko kot argument v %#insert podaš katerokoli shell
% komando. Glej, da jo bo lahko pognal kdorkoli, ki bi želel prevesti program.

Ne pozabiti
%#endblock
```

Da prevedeš, poženi `./lp.py chapters/ime-datoteke.tex`.
Končna PDF datoteka bo v `./ime-datoteke.p.pdf`.

### dependencies

`pip3 install pygments`
