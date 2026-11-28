
#include <stdio.h>


void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if((n / 2) * 2 == n)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

}

