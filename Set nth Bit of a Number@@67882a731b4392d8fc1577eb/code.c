#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d", &a, &b);

    result= a | (1 << b);
    printf("%d ", result);
    return 0;
}