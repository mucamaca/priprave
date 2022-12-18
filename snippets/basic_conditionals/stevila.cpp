#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b) {
        printf("Stevili sta enaki.\n");
    }
    if (a != b) {
        printf("Stevili sta razlicni.\n");
    }
    if (a < b) {
        printf("Prvo stevilo je manjse od drugega.\n");
    }
    if (a > b) {
        printf("Prvo stevilo je vecje od drugega.\n");
    }
    if (a <= b) {
        printf("Prvo stevilo je manjse ali enako drugemu.\n");
    }
    if (a >= b) {
        printf("Prvo stevilo je vecje ali enako drugemu.\n");
    }
    return 0;
}
