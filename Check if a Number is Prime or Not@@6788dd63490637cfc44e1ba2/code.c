#include <stdio.h>
int main(){
    int n;
    int i;
    int flag=0;
    scanf("%d", &n);
    for(i=2; i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}