#include <stdio.h>

void izpisi_prve_tri(int seznam[]) {
    printf("%d %d %d\n", seznam[0], seznam[1], seznam[2]);
}

int main() {
    int stevila[] = {7, 8, 6, 1, 2, 6, 3};
    izpisi_prve_tri(stevila); // izpiše "7 8 6"

    return 0;
}

