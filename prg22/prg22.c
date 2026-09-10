#include <stdio.h>
int main()
{
    int f, result=1;
    printf("Enter number to get factorial of: ");
    scanf("%d",&f);
    while(f>0)
    {
        result*=f;
        f-=1;
    }
    printf("factorial is: %d",result);
    return 0;
}
