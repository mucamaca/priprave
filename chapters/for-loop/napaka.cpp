#include <stdio.h>

int main() {
    int produkt = 0;
    int clen;
    while (scanf("%d", &clen) == 1) {
        produkt = produkt * clen;
    }
    printf("%d\n", produkt);
    return 0;
}
