
#include <stdio.h>
#include <conio.h>

void main()
{
    float pi = 3.14;
    float r;
    float area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area of Circle = %.2f", area);

}

