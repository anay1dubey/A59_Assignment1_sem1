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
    if(rev==i)
    {
        printf("number is pallendrome");
    }
    else
    {
        printf("number is not pallendrome");
    }
}
