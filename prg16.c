#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Enter num3: ");
    scanf("%d",&num3);
    printf("Greatest number is: ");
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d",num1);
        }
        else
        {
            printf("%d",num3);
        }
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
            printf("%d",num2);
        }
        else
        {
            printf("%d",num3);
        }
    }
    else
    {
        printf("%d",num3);
    }
}