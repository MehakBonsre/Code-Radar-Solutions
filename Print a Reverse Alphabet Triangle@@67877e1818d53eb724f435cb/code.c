#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=n;i--){
        for(j=i;j>=65;j--){
            printf("%c",j);
        }
        printf("\n");
    }
}