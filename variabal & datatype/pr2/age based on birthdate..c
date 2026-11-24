
#include <stdio.h>
#include <conio.h>

void main()
{
    int d, m, y;
    int cd, cm, cy;
    int ageY, ageM, ageD;

    printf("Enter Birth Date: ");
    scanf("%d", &d);

    printf("Enter Birth Month: ");
    scanf("%d", &m);

    printf("Enter Birth Year: ");
    scanf("%d", &y);

    printf("Enter Current Date: ");
    scanf("%d", &cd);

    printf("Enter Current Month: ");
    scanf("%d", &cm);

    printf("Enter Current Year: ");
    scanf("%d", &cy);

    ageY = cy - y;
    ageM = cm - m;
    ageD = cd - d;

    if(ageD < 0)
    {
        ageM--;
        ageD += 30;
    }

    if(ageM < 0)
    {
        ageY--;
        ageM += 12;
    }

    printf("Age = %d Years %d Months %d Days",
           ageY, ageM, ageD);
}

