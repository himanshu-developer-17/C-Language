
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d, e;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Enter d: ");
    scanf("%d",&d);
    printf("Enter e: ");
    scanf("%d",&e);

    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
            {
                if(a > e)
                    printf("a is Maximum ", a);
                else
                    printf("e is Maximum ", e);
            }
            else
            {
                if(d > e)
                    printf("d is Maximum ", d);
                else
                    printf("e is Maximum ", e);
            }
        }
        else
        {
            if(c > d)
            {
                if(c > e)
                    printf("c is Maximum ", c);
                else
                    printf("e is Maximum ", e);
            }
            else
            {
                if(d > e)
                    printf("d is Maximum ", d);
                else
                    printf("e is Maximum ", e);
            }
        }
    }
    else
    {
        if(b > c)
        {
            if(b > d)
            {
                if(b > e)
                    printf("b is Maximum ", b);
                else
                    printf("e is Maximum ", e);
            }
            else
            {
                if(d > e)
                    printf("d is Maximum ", d);
                else
                    printf("e is Maximum ", e);
            }
        }
        else
        {
            if(c > d)
            {
                if(c > e)
                    printf("c is Maximum ", c);
                else
                    printf("e is Maximum ", e);
            }
            else
            {
                if(d > e)
                    printf("d is Maximum ", d);
                else
                    printf("e is Maximum ", e);
            }
        }
    }

}

