#include <stdio.h>
int main()
{
    double n1,n2;
    int n3;
    printf("Enter num1: ");
    scanf("%lf",&n1);
    printf("Enter num2: ");
    scanf("%lf",&n2);
    printf("Enter num3 (for operation): ");
    scanf("%d",&n3);
    printf("result: ");
    switch(n3)
    {
    case 1:
        printf("%lf",n1+n2);
        break;
    case 2:
        printf("%lf",n1-n2);
        break;
    case 3:
        printf("%lf",n1*n2);
        break;
    case 4:
        printf("%lf",n1/n2);
        break;
    default:
        printf("Invalid num3");
        break;
    }
}
