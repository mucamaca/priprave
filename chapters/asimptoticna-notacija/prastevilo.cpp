bool preklicano = false;
for (int i = 2; i * i < n; i++) {
    if (n % i == 0) {
        printf("%d ni prastevilo\n", n);
        preklicano = true;
        break;
    }
}
if (!preklicano)
    printf("%d je prastevilo\n", n);
