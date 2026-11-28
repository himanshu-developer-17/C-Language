
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if(a < b)
    {
        if(a < c)
        {
            printf("a is Minimum ", a);
        }
        else
        {
            printf("c is Minimum ", c);
        }
    }
    else
    {
        if(b < c)
        {
            printf("b is Minimum ", b);
        }
        else
        {
            printf("c is Minimum ", c);
        }
    }

}

