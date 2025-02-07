#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer");
    scanf("%d", &num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    return 0;
}