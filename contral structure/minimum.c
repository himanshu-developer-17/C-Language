#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(a < b)
    {
        printf("%d is Minimum", a);
    }
    else if(b < a)
    {
        printf("%d is Minimum", b);
    }
    else
    {
        printf("Both numbers are Equal");
    }

}
