#include <stdio.h>
int main()
{
    int n1,n2,n3;
    int r1,r2;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);
    printf("Enter num3: ");
    scanf("%d",&n3);
    r1=(n1>=n2) ? n1 : n2;
    r2=(r1>=n3) ? r1 : n3;
    printf("Greatest number is: %d",r2);
}
