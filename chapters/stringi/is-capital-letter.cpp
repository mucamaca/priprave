#include <stdio.h>

int main() {
    char crka;
    scanf("%c", &crka);
    if (crka >= 'A' && crka <= 'Z') {
        printf("To je velika crka\n");
    } else if (crka >= 'a' && crka <= 'z') {
        printf("To je majhna crka\n");
    } else {
        printf("To sploh ni crka!\n");
    }
    return 0;
}
