#include <stdio.h>

bool je_samoglasnik(char crka) {
    if (crka == 'a' || crka == 'e' || crka == 'i' || crka == 'o' || crka == 'u') {
        return true;
    }
    return false;
}

int main() {
    char c;
    scanf("%c", &c); // prebere eno črko

    if (je_samoglasnik(c)) {
        printf("To je samoglasnik!\n");
    }
    else {
        printf("To pa ni samoglasnik.\n");
    }

    return 0;
}
