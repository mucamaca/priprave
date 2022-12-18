#include <stdio.h>

int main() {
    int dolzina;
    scanf("%d", &dolzina);
    for (int stevec=0; stevec < dolzina; stevec++) {
        printf("-");
    }
    printf(">\n");
    return 0;
}
