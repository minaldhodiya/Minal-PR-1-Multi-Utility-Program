#include<stdio.h>

int main()
{
    float C,F;
    printf("The temperature in Celsius:");
    scanf("%f",&C);

    F = (C * 1.8)+32;

    printf("The temperature in Fahrenheit :%.2f",F);

}