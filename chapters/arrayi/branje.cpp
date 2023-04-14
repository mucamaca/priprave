#include <stdio.h>

// seznam je malce daljši od 10^5 - glej spodaj
int seznam[100002];

int main() {
    int N;  // dolžina seznama
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        // preberemo številko na i-to mesto seznama
        scanf("%d", &seznam[i]);
    }
    // v spremenljivki bomo hranili delno vsoto prvih
    // nekaj mest seznama
    int vsota = 0;
    for (int i = 0; i < N; i++) {
        vsota += seznam[i];
    }
    printf("%d\n", vsota);
    return 0;
}
