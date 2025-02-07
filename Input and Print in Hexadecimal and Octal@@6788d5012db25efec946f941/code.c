#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer");
    scanf("%d", &x);
    printf("Hexadecimal: %x\n", x);
    printf("Octal: %o\n", x);
    return 0;
}