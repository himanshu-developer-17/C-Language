
#include <stdio.h>
#include <conio.h>

void main()
{
    float l;
    float b;
    float area;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    area = l * b;

    printf("Area of Rectangle = %.2f", area);

}

