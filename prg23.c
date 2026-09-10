#include <stdio.h>
int main()
{
    int base, pow, result=1;
    printf("Enter base, exponent: ");
    scanf("%d, %d",&base,&pow);
    while(pow>0)
    {
        result*=base;
        pow-=1;
    }
    printf("Result: %d",result);
    return 0;
}