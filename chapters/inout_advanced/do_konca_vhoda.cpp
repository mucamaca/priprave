#include<stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        printf("%d\n", a*a); //izpisujemo kvadrate prebranega števila
    }
    return 0;
}
