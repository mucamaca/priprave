#include <stdio.h>

void funkcija(int stevilo, int seznam[]) {
    stevilo = 123; // ta sprememba ne vpliva na a v main-u
    seznam[0] = 123; // ta sprememba vlpliva na sez v main-u
}

int main() {
    int a = 10;
    int sez[] = {10};
    funkcija(a, sez);
    // a bo še vedno 10, medtem, ko bo seznam enak {123}

    return 0;
}
