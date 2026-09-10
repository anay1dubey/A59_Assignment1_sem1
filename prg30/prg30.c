#include <stdio.h>
int main()
{
    int i,temp,rev=0,rem;
    printf("Enter a number: ");
    scanf("%d",&i);
    temp=i;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    printf("Reverse of %d is: %d",i,rev);
}
