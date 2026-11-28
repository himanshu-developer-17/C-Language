
#include <stdio.h>


void main()

{
    int a, b, c, d;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Enter d: ");
    scanf("%d",&d);
    

    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
                printf("a is Maximum ", a);
            else
                printf("d is Maximum ", d);
        }
        else
        {
            if(c > d)
                printf("c is Maximum ", c);
            else
                printf("d is Maximum ", d);
        }
    }
    else
    {
        if(b > c)
        {
            if(b > d)
                printf("b is Maximum ", b);
            else
                printf("d is Maximum ", d);
        }
        else
        {
            if(c > d)
                printf("c is Maximum ", c);
            else
                printf("d is Maximum ", d);
        }
    }

}

