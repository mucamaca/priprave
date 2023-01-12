#include<stdio.h>

int main(){
    int a;
    FILE *fr, *fw;
    fr = fopen("in.txt", "r");
    fw = fopen("out.txt", "w");
    while(fscanf(fr, "%d", &a) != EOF){
        fprintf(fw, "%d\n", a*a);
    } //iz datoteke fr preberemo vsa števila in v fw izpišemo njihove kvadrate
    fclose(fr);
    fclose(fw);
    return 0;
}
