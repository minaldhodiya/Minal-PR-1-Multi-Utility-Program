#include <stdio.h>

int main()
{
    float bs, hra, da, ta,gs;
    printf("Basic Salary:\n");
    scanf("%f", &bs);
    printf("HRA:\n");
    scanf("%f", &hra);
    printf("DA:\n");
    scanf("%f", &da);
    printf("TA:\n");
    scanf("%f", &ta);
    
    
    gs = bs + hra + da + ta;

    printf("The temperature in Fahrenheit :%.2f", gs);
}