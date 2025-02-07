#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer");
    scanf("%d", &x);
    printf("Hexadecimal: %x", x);
    printf("Octal: %o", x);
    return 0;
}