#include <stdio.h>

int main()
{
    float fa,sa,ta;
    printf("First Angle:");
    scanf("%f", &fa);
    printf("Second Angle:");
    scanf("%f", &sa);   
    
    ta =180-(fa+sa);

    printf("Third Angle :%.2f", ta);
}