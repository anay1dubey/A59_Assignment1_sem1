#include <stdio.h>
int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d",&n);
    int i;
    printf("%d",1);
    for(i=3;i<=n;i+=2)
    {
        printf(",");
        printf("%d",i);
    }
}