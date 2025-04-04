

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]);

int main() {
    int i, n, m;
    scanf("%d", &n);
    int ranked[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }
    scanf("%d", &m);
    int player[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }
    int result[m];

    trackPlayerRanks(ranked, n, player, m, result);

    for (i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int rank = 1;
    int ranks[n];


    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            rank++;
        }
        ranks[i] = rank;
    }


    int j = n - 1;
    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= ranked[j]) {
            j--;
        }
        result[i] = (j == -1) ? 1 : ranks[j] + 1;
    }
}
