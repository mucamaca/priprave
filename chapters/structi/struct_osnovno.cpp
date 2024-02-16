#include<stdio.h>

struct Tocka{
	int x, y;
};

int main(){
	Tocka tocka;
	scanf("%d %d", &tocka.x, &tocka.y);
	printf("(%2d, %2d)\n", tocka.x, tocka.y);
	return 0;
}
