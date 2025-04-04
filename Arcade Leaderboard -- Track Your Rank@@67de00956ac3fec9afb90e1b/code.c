#include <stdio.h>
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]);
int main(){
    int i, n, m;

    // Read the number of ranked scores
    scanf("%d", &n);
    int ranked[200000];
    for (i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    // Read the number of player scores
    scanf("%d", &m);
    int player[200000];
    for (i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    // Array to store the results
    int result[200000];

    // Compute player ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Output the results
    for (i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Example Implementation
    int ranks[200000];
    int rank = 1;

    // Generate ranks for the ranked array (consider duplicate scores)
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = rank;
        } else {
            ranks[i] = ++rank;
        }
    }

    // Determine each player's rank
    int j = n - 1; // Start from the end of the ranked array
    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= ranked[j]) {
            j--;
        }
        result[i] = (j == -1) ? 1 : ranks[j] + 1;
    }
}
