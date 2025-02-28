#include <stdio.h>
int main(){
    int a, b;
    char operator;
    int result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("%d", result);
    return 0;
}
