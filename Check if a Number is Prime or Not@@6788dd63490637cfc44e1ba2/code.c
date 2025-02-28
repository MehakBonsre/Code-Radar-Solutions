#include <stdio.h>

int main() {
    int a, i, isPrime = 1;

    // Read input
    printf("Enter a positive integer: ");
    scanf("%d", &a);

    // Check if the number is greater than 1
    if (a <= 1) {
        isPrime = 0;
    } else {
        // Check if the number is divisible by any number from 2 to a-1
        for (i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);

    return 0;
}
