#include <stdio.h>
int main(){
    int i,j,k,n;
    int m=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            m++;
            printf("%d ", m);
            
        }
        printf("\n");
    }
    return 0;
}