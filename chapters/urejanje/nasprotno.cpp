#include <algorithm>
#include <stdio.h>
using namespace std;

int arr[1000003];

int compare_padajoce(int a, int b) {
    return a > b;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n, compare_padajoce);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
