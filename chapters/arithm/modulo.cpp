#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d = %d*%d + %d\n", a, a/b, b, a%b);
    printf("Količnik: %d\nOstanek: %d\n", a/b, a%b);
    return 0;
}
