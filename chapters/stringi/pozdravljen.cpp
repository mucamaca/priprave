#include <stdio.h>

int main() {
    char uporabnikovo_ime[300];
    scanf("%s", uporabnikovo_ime);  // NE napišemo &
    printf("Zivjo %s!\n", uporabnikovo_ime);
    return 0;
}
