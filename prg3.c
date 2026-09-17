#include <stdio.h>
int main()
{
    int l[100]={};
    int n,j,i=0,s=0;
    while(1)
    {
        printf("Enter a value: ");
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        l[i]=n;
        i++;
    }
    for(j=0;j<i;j++)
    {
        s+=l[j];
    }
    printf("Sum of all elements in the list is: %d",s);
}