#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    if(a>b || b>a){
        printf("First");
    }
    else{
        printf("Equal");
    }
    return 0;
}