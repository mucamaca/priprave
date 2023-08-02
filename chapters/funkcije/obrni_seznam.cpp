#include <stdio.h>

void obrni(int seznam[], int dolzina) {
    // Obrnemo vrstni red prvih dolzina elementov seznama
    for (int i = 0; i < dolzina / 2; i++) {
        int vmesna = seznam[i];
        seznam[i] = seznam[dolzina-i-1];
        seznam[dolzina-i-1] = vmesna;
    }
}

int main() {
    int n;
    int seznam[1000];

    // preberemo seznam dolžine n
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &seznam[i]);
    }

    obrni(seznam, n);

    // izpišemo obrnjen seznam
    for (int i = 0; i < n; i++) {
        printf("%d\n", seznam[i]);
    }

    return 0;
}
