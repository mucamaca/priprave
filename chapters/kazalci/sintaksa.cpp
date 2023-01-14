#include <stdio.h>

int main() {
    int a = 7;
    int b = 3;

    // Ustvarimo kazalec na int, ki kaže na spremenljivko a
    // To pomeni, da bo v kazalcu shranjen naslov prve od štirih
    // celic, ki jih zavzema a.
    int *kazalec = &a;

    // Izpišemo vrednost, na katero kaže kazalec
    printf("%d\n", *kazalec);  // 7

    // Če spremenimo vrednost, na katero kaže kazalec, se spremeni
    // vrednost v spominu; torej tudi spremenljivka, ki je tam shranjena
    *kazalec = 15;
    printf("%d\n", a);  // 15

    // Če spremenimo lokacijo, kamor kaže kazalec, nismo spremenili vrednosti,
    // na katero je kazal prej
    kazalec = &b;
    printf("%d\n", *kazalec);  // 3
    printf("%d\n", a);  // 15

    return 0;
}
