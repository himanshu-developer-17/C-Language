#include <stdio.h>

void main()
{
    float baseSalary, hra, da, ta, totalSalary;

    printf("Base Salary: ");
    scanf("%f",&baseSalary);

    printf("HRA: ");
    scanf("%f",&hra);

    printf("DA: ");
    scanf("%f",&da);

    printf("TA: ");
    scanf("%f",&ta);

    totalSalary = baseSalary + (baseSalary * hra / 100) + (baseSalary * da / 100) + (baseSalary * ta / 100);

    printf("Gross Salary: Rs. %.0f", totalSalary);

}
