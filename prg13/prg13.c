#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%2==1)
    {
        printf("Number is odd");
    }
    else
    {
        printf("number is even");
    }
}
