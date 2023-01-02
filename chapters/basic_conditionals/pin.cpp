#include <stdio.h>

int main() {
    // Vprasaj uporabnika za PIN, in preveri, ce je pravilen
    int pin;
    scanf("%d", &pin);
    if (pin == 42) {
        printf("PIN je pravilen!");
    } else {
        printf("PIN je napacen!");
    }
    return 0;
}
