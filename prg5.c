#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("number is composite");
    }
    else
    {
        printf("number is prime");
    }
}