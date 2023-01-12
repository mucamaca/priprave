#include<stdio.h>

int main(){
    char a[50];
    scanf("%[^\n]", a); //ali scanf("%[^\n]%*c") in brez getchar()
    getchar();
    printf("%s\n", a);
    return 0;
}
