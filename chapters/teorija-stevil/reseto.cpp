int M;  // zgornja meja

// Tabela, ki hrani trenutno stanje rešeta
// če je na nekem mestu zapisana številka 0, to pomeni,
// da še nismo našli nobenega praštevilskega delitelja.
// Ko nekega delitelja najdemo, ga zapišemo
int reseto[M+1];

void poisci_prastevila() {
    // V spremenljivki i bomo hranili število, ki ga trenutno obravnavamo
    // začnemo pri 2, ker niti 0 niti 1 nista praštevili
    // Iteriramo samo do korena M
    for (int i = 2; i*i <= M; i++) {
        // Če je na mestu i ničla, do sedaj nismo našli nobenega praštevila,
        // torej mora biti število i nujno praštevilo
        if (reseto[i] == 0) {
            printf("Najdeno praštevilo %d!\n", i);

            // Sedaj "prečrtamo" vse večkratnike števila i
            for (int j = 2*i; j <= M; j += i) {
                // Zabeležimo si, da je i delitelj j
                reseto[j] = i;
            }
        }
    }
}
