#include<stdio.h>

int main(){
    int n;
    char a[10], b;
    char text[]="Slovenska 157 a";
    sscanf(text, "%s%d %c", a, &n, &b);
    sprintf(text, "%c %d %s", b, n, a);
    printf("%s\n", text);
    return 0;
}
