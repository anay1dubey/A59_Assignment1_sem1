#include <stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter upper n: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s+=i;
        i+=2;
    }
    printf("Sum of all odd no between 1 and %d is: %d \n",n,s);
    i=2;
    s=0;
    while(i<=n)
    {
        s+=i;
        i+=2;
    }
    printf("Sum of all even no between 1 and %d is: %d",n,s);
    return 0;
}
