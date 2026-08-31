#include <stdio.h>
int main()
{
    float ftemp;
    printf("Enter temp in farenheihts: ");
    scanf("%f",&ftemp,"\n");
    printf("Temperature in centigrade is: %f",(ftemp-32)*5.0/9.0);
    return 0;
}
