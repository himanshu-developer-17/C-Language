#include <stdio.h>

void main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num >= 0)
    {
        if(num == 0)
        {
            printf("Number is Neutral");
        }
        else
        {
            printf("Number is Positive");
        }
    }
    else
    {
        printf("Number is Negative");
    }

}
