#include <stdio.h>

void plusi(int n) {
    // izpišemo n plusov
    for (int i = 0; i < n; i++) {
        printf("+");
    }
    printf("\n"); // končamo z znakom za novo vrstico
}

int main() {
    plusi(12); // pokličemo funkcijo s parametrom 12

    return 0;
}

