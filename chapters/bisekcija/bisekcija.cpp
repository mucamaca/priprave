// dan imamo seznam arr dolžine n
// seznam prvo uredimo
sort(arr, arr+n);

// iz standardnega vhoda q-krat preberemo iskano število k,
// ter izpišemo "DA", če je število v seznamu, in "NE", če števila
// ni v seznamu
while(q-->0) {
    int k;
    scanf("%d", &k);

    int levo = 0;
    int desno = n-1;
    bool nasel = false;
    while (levo <= desno) {
        int sredina = (levo + desno) / 2;
        if (arr[sredina] == k) {
            nasel = true;
            break;
        }
        if (arr[sredina] > k) desno = sredina-1;
        else levo = sredina+1;
    }

    if (nasel) printf("DA\n");
    else printf("NE\n");
}
