#include <string.h>

int main() {

    char niz1[] = "jabolko";
    char niz2[] = "pomaranca";
    char oba_skupaj[100];

    strcpy(oba_skupaj, niz1); // oba_skupaj je zdaj "jabolko"
    strcat(oba_skupaj, " in "); // oba_skupaj je zdaj "jabolko in "
    strcat(oba_skupaj, niz2); // oba_skupaj je zdaj "jabolko in pomaranca"

    return 0;
}
