#include<stdio.h>

int main(){
    int a, b, vsota, razlika, produkt;
    scanf("%d%d", &a, &b);
    vsota = a+b;
    razlika = a-b;
    produkt = a*b;
    printf("%d\n%d\n%d\n", vsota, razlika, produkt);
    return 0;
}
