#include <stdio.h>

int main()
{
    float bs, hra, da, ta,gs;

    printf("Basic Salary:");
    scanf("%f", &bs);

    printf("HRA:");
    scanf("%f", &hra);

    printf("DA:");
    scanf("%f", &da);

    printf("TA:");
    scanf("%f", &ta);    
    
    gs = bs + hra + da + ta;

    printf("The temperature in Fahrenheit :%.2f", gs);
    return 0;
}