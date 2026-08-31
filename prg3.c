#include <stdio.h>
int main()
{
    float base_sal, hra, bonuses;
    printf("Enter base salary: ");
    scanf("%f", &base_sal,"\n");
    printf("Enter house rent allowance: ");
    scanf("%f", &hra,"\n");
    printf("Enter bonuses given: ");
    scanf("%f", &bonuses,"\n");
    printf("Gross salary: %f",base_sal+hra+bonuses);
}