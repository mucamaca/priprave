#include <string.h>
#include <stdio.h>

int main() {
    char niz[11];  // niz, ki bo hranil številko
    // premisli, zakaj je dolžina 11 že dovolj
    scanf("%s", niz);
    int dolzina = strlen(niz);
    int stevilo = 0;  // začnemo z 0
    for (int i = 0; i < dolzina; i++) {
        stevilo *= 10;
        stevilo += (niz[i] - '0');
        // niz[i] je znak, ki ga moramo pretvoriti v številko, da lahko
        // računamo z njim
    }
    printf("Stevilka je %d\n", stevilo);
    return 0;
}
