#include <algorithm>
#include <stdio.h>
using namespace std;

int tocke[100003];
char imena[100003][30];
int idxs[100003];

int compare(int i, int j) {
    return tocke[i] > tocke[j];
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%d", imena[i], &tocke[i]);
    }
    // pripravimo tabelo indeksov
    for (int i = 0; i < n; i++)
        idxs[i] = i;

    sort(idxs, idxs+n, compare);

    for (int i = 0; i < n; i++) {
        int idx = idxs[i];
        printf("%s\n", imena[idx]);
    }
    return 0;
}
