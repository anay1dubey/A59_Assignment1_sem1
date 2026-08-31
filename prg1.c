#include <stdio.h>
int main()
{
    int p, t;
    float r;
    printf("Enter principle amount: ");
    scanf("%d", &p,"\n");
    printf("Enter rate of intrest: ");
    scanf("%f", &r,"\n");
    printf("Enter time in years: ");
    scanf("%d", &t,"\n");
    printf("Total intrest is: %f", p*r*t);
    return 0;
}