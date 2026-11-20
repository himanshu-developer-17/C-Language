
#include <stdio.h>
#include <conio.h>

void main()
{
    float b;
    float h;
    float area;

    printf("Enter base: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("Area of Triangle = %.2f", area);

}

