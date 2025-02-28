#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if(a=='A'){
        printf("Excellent");
    }
    else if(a=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(a=='D'){
        printf("Below Average");
    }
    else if(a=='F'){
        printf("Fail");
    }
    else{
        printf("Error");
    }
    return 0;
}