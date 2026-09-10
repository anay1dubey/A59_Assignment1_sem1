#include <stdio.h>
int main()
{
    int x,y,n;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("The value of y is: %d",1+x);
    }
    else if(n==2)
    {
        printf("The value of y is: %d",1+x/2);
    }
    else if(n==3)
    {
        printf("The value of y is: %d",1+x*x*x);
    }
    else
    {
        printf("Value of y is: %d", 1+n*x);
    }
    return 0;
}