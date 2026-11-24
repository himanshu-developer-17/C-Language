
#include <stdio.h>
#include <conio.h>

void main()
{
    float meter, km;

    printf("Enter Meter: ");
    scanf("%f", &meter);

    km = meter / 1000;

    printf("Kilometer = %.2f", km);

}

