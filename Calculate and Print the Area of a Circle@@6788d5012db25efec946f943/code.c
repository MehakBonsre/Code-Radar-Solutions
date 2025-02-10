#include <stdio.h>
int main(){
    float r;
    float area;
    scanf("%.2f", &r);
    area= 3.14*pow(r,2);
    printf("Area: %.2f", area);

    return 0;
}