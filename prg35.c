#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i/10>0)
    {
        int s=0;
        while(i%10>0)
        {
            s=s+i%10;
            i/=10;
        }
        i=s;
    }
    printf("Sum of all digits till obtaining a single digit: %d",i);
}