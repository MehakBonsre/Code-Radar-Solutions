#include <stdio.h>
int main(){
    int i,j,k,r,c,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-1);j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            printf("*");
        }
        for(r=2;r>=1;r--){
            for(c=1;c<=(2*r-1);c++){
                printf("*");
            }
            for(r=2;r>=1;r--){
                for(c=1;c=(n-r);c++){
                    printf(" ");
                }
            }
        }
    }
    return 0;
}