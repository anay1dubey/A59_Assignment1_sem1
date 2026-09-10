#include <stdio.h>
int main()
{
    int n;
    printf("Enter no to check if prime: ");
    scanf("%d",&n);
    int i=2, c=0;
    while(i<n)
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    if(c>0)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
    return 0;
}