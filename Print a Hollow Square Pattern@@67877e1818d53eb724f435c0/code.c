// Your code here...
#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", n);
    for(i=1; i<=n; i++)
        printf("*");
    printf("\n");
    for(i=2; i<n; i++)
    {
        printf("*");
        for(j=2, j<n; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    for(i=1; i<=n; i++)
        printf("*");
    return 0;
}