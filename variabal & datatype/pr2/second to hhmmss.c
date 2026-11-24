
#include <stdio.h>
#include <conio.h>

void main()
{
    int seconds, hh, mm, ss;

    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    hh = seconds / 3600;
    mm = (seconds % 3600) / 60;
    ss = seconds % 60;

    printf("%02d:%02d:%02d", hh, mm, ss);

}

