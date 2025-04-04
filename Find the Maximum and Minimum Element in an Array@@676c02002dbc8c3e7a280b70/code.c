#include <stdio.h>
int main() {
    int i, N;

    // Read the size of the array
    scanf("%d", &N);

    // Declare the array
    int arr[N];

    // Read the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find min and max
    for (i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the results
    printf("%d ", min);
    printf("%d ", max);

    return 0;
}
