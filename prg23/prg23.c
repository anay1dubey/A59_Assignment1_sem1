#include <stdio.h>
int main()
{
    int base, pow;
    double result=1;
    printf("Enter base, exponent: ");
    scanf("%d, %d",&base,&pow);
    while(pow>0)
    {
        result*=base;
        pow-=1;
    }
    while(pow<0)
    {
        result=result/(double)base;
        pow+=1;
    }
    printf("Result: %lf",result);
    return 0;
}
