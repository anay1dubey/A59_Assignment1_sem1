#include <stdio.h>
int main()
{
    int n;
    printf("Enter no elements to print in fibonacci series: ");
    scanf("%d",&n);
    int e1=0,e2=1,e3;
    int i;
    printf("%d \n",e1);
    printf("%d \n",e2);
    for(i=3;i<=n;i++)
    {
        e3 = e1 + e2;
        printf("%d \n",e3);
        e1=e2;
        e2=e3;
    }
}
