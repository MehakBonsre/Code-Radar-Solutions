#include <stdio.h>
int main(){
    char c;
    scanf("%c", c);
    if(c >= 'A' && c<= 'Z')
    {
        printf("\nUppercase");
    }
    else if(c >= 'a' && c<= 'z')
    {
        printf("\nLowercase")
    }
    else{
        printf("\nNot an alphabet");
    }
    return 0;
}