#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int value= i%2;
        for(j=1;j<=i;j++){
            printf("%d ", value);
            value = 1-value;
        }
        printf("\n");
    }
    return 0;
}