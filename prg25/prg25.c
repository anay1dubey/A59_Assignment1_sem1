#include <stdio.h>
int main()
{
    int t,i=1;
    printf("Enter number for table: ");
    scanf("%d",&t);
    while(i<=10)
    {
        printf("%d x %d = %d \n",t,i,t*i);
        i++;
    }
    return 0;
}
