#include <stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j<= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1);j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
