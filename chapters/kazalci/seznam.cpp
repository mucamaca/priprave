#include <stdio.h>
#include <stdlib.h>

int main() {
    int dolzina_seznama = 100000;
    int *seznam = (int*)malloc(dolzina_seznama * sizeof(int));

    for (int i = 0; i < dolzina_seznama; i++) {
        scanf("%d", seznam+i);
    }

    // sedaj lahko spremenljivko `seznam` uporabljamo
    // kot katerikoli drugi seznam
    int vsota = 0;
    for (int i = 0; i < dolzina_seznama; i++) {
        vsota += seznam[i];
    }

    printf("%d\n", vsota);

    // ne smemo pozabiti sprostiti spomina
    free(seznam);

    return 0;
}
