#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}