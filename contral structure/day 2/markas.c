
#include <stdio.h>
#include <conio.h>

void main()
{
    int hindi, maths, social science, science, gujariti;
    float total, per;

    printf("Enter Hindi marks: ");
    scanf("%d",&hindi);
    printf("Enter Maths marks: ");
    scanf("%d",&maths);
    printf("Enter Social science marks: ");
    scanf("%d",&social science);
    printf("Enter Science marks: ");
    scanf("%d",&science);
    printf("Enter Gujariti marks: ");
    scanf("%d",&gujariti);

    total = hindi + maths + social science + science + gujariti;

    per = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("Grade A+");
    }
    else if(per >= 80)
    {
        printf("Grade A");
    }
    else if(per >= 70)
    {
        printf("Grade B");
    }
    else if(per >= 60)
    {
        printf("Grade C");
    }
    else if(per >= 50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

}

