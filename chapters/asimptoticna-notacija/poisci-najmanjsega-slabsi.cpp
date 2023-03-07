int arr[100002];
int poisci_najmanjsega_slabsi(int n, int m) {
    // Poišči najmanjše število v seznamu, dolgemu n,
    // kjer je največje število veliko največ m
    for (int zelja = 0; zelja <= m; zelja++) {
        // zelja nam pove, kateri element si v tej iteraciji želimo
        // najti. Pogledati moramo še, da ta element dejansko je v seznamu;
        // ko pa najdemo enega, bo to najmanjši (ker zelja v vsaki iteraciji
        // narasca)
        bool je_v_seznamu = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == zelja)
                je_v_seznamu = true;
        }
        if (je_v_seznamu)
            return zelja;
    }
}
