#include <stdio.h>
int main(){
    int a, num;
    scanf("%d ", &a);
    
    if (a & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}