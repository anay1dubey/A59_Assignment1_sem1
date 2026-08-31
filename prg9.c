#include <stdio.h>
int main()
{
    int hr,min,sec;
    printf("enter hours from time: ");
    scanf("%d",&hr);
    printf("enter minutes from time: ");
    scanf("%d",&min);
    printf("enter seconds from time: ");
    scanf("%d",&sec);
    printf("Total seconds: %d",hr*3600 +min*60 + sec);
    return 0;
}