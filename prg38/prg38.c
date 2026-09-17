#include <stdio.h>
int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d,",i*i);
    }
}
