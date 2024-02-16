#include<stdio.h>
#include<algorithm>

struct Tocka{
	int x, y;

	void izpisi(const char * konec){
		printf("(%2d, %2d)%s", this->x, y, konec);
	}

	bool operator<(const Tocka& druga_tocka) const {
		if(x!=druga_tocka.x)
			return this->x < druga_tocka.x;
		return druga_tocka.y < this->y;
	}
};

int main(){
	Tocka tocke[10];
	int i, n;
	scanf("%d", &n);
	for(i=0;i<n;++i)
		scanf("%d %d", &tocke[i].x, &tocke[i].y);
	std::sort(tocke, tocke+n);
	for(i=0;i<n;++i)
		tocke[i].izpisi(i+1==n?"\n":" < ");
	return 0;
}
