#include <stdio.h>

int vsota(int a, int b) {
    int a_plus_b = a + b;
    return a_plus_b;
}

int main() {
    int rezultat = vsota(3, 4);
    printf("%d\n", rezultat);

    return 0;
}

