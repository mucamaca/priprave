#include <stdio.h>
int main() {
    // Uporabnik naj napise 1, ce zeli juho, in 2, ce zeli sendvic.
    int zelja;
    scanf("%d", &zelja);
    if (zelja == 1) {
        // Uporabnik naj napise 1, ce zeli govejo juho,
        // in 2, ce zeli paradiznikovo.
        scanf("%d", zelja);
        if (zelja == 1) {
            printf("Ena goveja juha. Dober tek!\n");
        } else {
            printf("Ena paradiznikova juha. Dober tek!\n");
        }
    } else {
        // Uporabnik naj napise 1, ce zeli sendvic s sunko,
        // in 2, ce zeli vegeterjanski sendvic.
        scanf("%d", &zelja);
        if (zelja == 1) {
            printf("En sendvic s sunko. Dober tek!\n");
        } else {
            printf("En vegeterjanski sendvic. Dober tek!\n");
        }
    }
    return 0;
}
