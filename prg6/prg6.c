#include <stdio.h>
int main()
{
    int var1, var2;
    printf("Enter value of variable 1: ");
    scanf("%d",&var1,"\n");
    printf("Enter value of variable 2: ");
    scanf("%d",&var2,"\n");
    printf("Values of variable 1: %d variable 2: %d \n",var1,var2);
    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;
    printf("Values of variable 1: %d variable 2: %d",var1,var2);
    return 0;
}
