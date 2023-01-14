#include <stdio.h>
#include <stdlib.h>

int main() {
    int *kazalec = (int*)malloc(sizeof(int));
    *kazalec = 3;
    printf("%d\n", *kazalec);  // izpiše 3
    return 0;
}
