int arr[100002];

int poisci_najmanjsega(int n) {
    // Poišči najmanjše število v seznamu, dolgemu n
    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[min_idx] > arr[i]) {
            min_idx = i;
        }
    }
    return arr[min_idx];
}
