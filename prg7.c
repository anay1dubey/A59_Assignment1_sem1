#include <stdio.h>
int main()
{
    float h,b;
    printf("Enter height: ");
    scanf("%f",&h,"\n");
    printf("Enter base: ");
    scanf("%f",&b,"\n");
    printf("Area of triangle: %f",0.5*b*h);
    return 0;
}