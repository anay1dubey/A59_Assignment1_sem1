#include <stdio.h>
int main()
{
    double n,nf,ans,s=0;
    printf("Enter upper limit: ");
    scanf("%lf",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        nf=1.0;
        int temp=i;
        while(temp>0)
        {
            nf=nf*temp;
            temp--;
        }
        ans=(double)i/nf;
        s=s+ans;
    }
    printf("Sum of series is: %lf", s);
}
