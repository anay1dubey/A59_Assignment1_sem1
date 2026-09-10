#include <stdio.h>
int main()
{
    int i,s=0;
    printf("Enter a number: ");
    scanf("%d",&i);
    int temp=i;
    while(temp>0)
    {
        s=s+temp%10;
        temp/=10;
    }
    printf("Sum of digits of %d is: %d",i,s);
}