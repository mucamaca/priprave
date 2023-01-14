#include <stdio.h>

void f(int x) {
    y = 2 * x;
}

int main() {
    int y;
    int x = 3;
    f(x);
    printf("%d\n", y);
    return 0;
}
