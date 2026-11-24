
#include <stdio.h>
#include <conio.h>

void main()
{
    float p;
    float r;
    float t;
    float si;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);

}

