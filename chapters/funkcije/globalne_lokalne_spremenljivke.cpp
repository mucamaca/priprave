#include <stdio.h>

// tu so globalne spremenljivke
int g = 12;

void funkcija() {
    // v tej funkciji lahko dostopamo do g
    printf("%d\n", g);
}

int main() {

    int n = 200;

    funkcija();

    // tu lahko dostopamo do g in n
    printf("%d, %d\n", g, n);

    return 0;
}
