#include <stdio.h> // ko napišemo to vrstico,
                   // dobimo dostop do sprintf in sscanf

int main() {
    int n;
    scanf("%d", &n);

    char n_niz[100];
    sprintf(n_niz, "%d", n);
    // zdaj smo spremenili n v niz

    int nazaj_n;
    sscanf(n_niz, "%d", &nazaj_n);
    // zdaj smo iz niza nazaj prebrali nazaj_n
}

