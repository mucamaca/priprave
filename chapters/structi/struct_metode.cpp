#include<stdio.h>
#include<math.h>

struct Tocka{
	int x, y;

	int kvadrat_razdalje(){
		return x*x+y*y;
	}

	double razdalja(){
		return sqrt(kvadrat_razdalje());
	}

	void izpisi(const char * konec){
		printf("(%2d, %2d)%s", x, y, konec);
	}
};

int main(){
	Tocka tocka;
	scanf("%d %d", &tocka.x, &tocka.y);
	tocka.izpisi(" ");
	printf("je od izhodisca oddaljena %lf enot.\n", tocka.razdalja());
	return 0;
}
