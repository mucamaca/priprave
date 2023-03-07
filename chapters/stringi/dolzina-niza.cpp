#include <stdio.h>

int main() {
    char niz[301];
    // uporabnik lahko napise niz dolžine najvec 300
    scanf("%s", niz);

    // da poiščemo dolžino, bomo dejansko poiskali indeks
    // znaka NULL; s tem bomo dobili točno število znakov pred njim
    int i = 0;  // trenutni indeks v nizu
    while (niz[i] != 0) {  // ASCII koda znaka NULL je 0
        i++;
    }
    // na kocnu je i ravno indeks znaka NULL, in s tem enak
    // dolzini niza
    printf("Niz je dolg %d znakov\n", i);
    return 0;
}
