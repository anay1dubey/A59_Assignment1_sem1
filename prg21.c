#include <stdio.h>
int main()
{
    double n1,n2;
    char op;
    printf("Enter num1: ");
    scanf("%lf",&n1);
    printf("Enter num2: ");
    scanf("%lf",&n2);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&op);
    printf("result: ");
    switch(op)
    {
    case '+':
        printf("%lf",n1+n2);
        break;
    case '-':
        printf("%lf",n1-n2);
        break;
    case '*':
        printf("%lf",n1*n2);
        break;
    case '/':
        printf("%lf",n1/n2);
        break;
    default:
        printf("Invalid operator");
        break;
    }
}