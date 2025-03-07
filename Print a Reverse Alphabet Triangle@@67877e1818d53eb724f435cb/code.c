#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=65;j--){
            printf("%c",j);
        }
        printf("\n");
    }
}