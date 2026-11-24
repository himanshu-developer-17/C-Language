
#include <stdio.h>
#include <conio.h>

void main ()
{
    float x;
    float y;
    float ans;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of y: ");
    scanf("%f", &y);

    ans = (x + y) * (x + y);

    printf("Answer = %.2f", ans);

}
