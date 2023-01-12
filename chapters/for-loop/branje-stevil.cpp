#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vsota = 0;
    for (int i=0; i < n; i++) {
        int sestevanec;
        scanf("%d", &sestevanec);
        vsota += sestevanec;
    }
    printf("%d\n", vsota);
    return 0;
}
