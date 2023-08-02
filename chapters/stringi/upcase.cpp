#include <string.h>
#include <stdio.h>

int main() {
    char niz[201];
    scanf("%s", niz);

    // Zamik med velikimi in majhnimi črkami je enak ne glede na to, katera
    // črka je to. V zanki bomo vsaki majhni črki odšteli zamik, s čimer jo
    // pretvorimo v veliko
    int zamik = 'a' - 'A';
    int dolzina = strlen(niz);
    for (int i = 0; i < dolzina; i++) {
        // če je črka majhna, jo moramo povečati
        // to moramo nujno preveriti, saj drugih znakov ne smemo spremeniti!
        if ('a' <= niz[i] && niz[i] <= 'z') {
            niz[i] = niz[i] - zamik;
        }
    }
    printf("%s\n", niz);
    return 0;
}
