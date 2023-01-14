#include <stdio.h>

void f(int *kazalec) {
    *kazalec = 2 * (*kazalec);
}

int main() {
    int x = 3;
    f(&x);
    printf("%d\n", *x);
    return 0;
}
