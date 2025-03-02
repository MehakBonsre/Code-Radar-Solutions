#include <stdio.h>
int main(){
    int i,p;
    int n;
    scanf("%d", &n);
    for(i=1;i<=10;i++){
        p=n*i;
        printf("%d x %d = %d", n,i,p);
        printf("\n");
    }
    return 0;
}