
#include <stdio.h>
#include <conio.h>

int main()
{
    float pi = 3.14;
    float r;
    float perimeter;

    printf("Enter radius: ");
    scanf("%f", &r);

    perimeter = 2 * pi * r;

    printf("Perimeter of Circle = %.2f", perimeter);

}

