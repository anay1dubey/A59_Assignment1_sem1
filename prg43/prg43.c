#include <stdio.h>
int main()
{
    double sales,comm;
    printf("Enter sales: ");
    scanf("%lf",&sales);
    if(sales<=500)
    {
        comm=sales*0.05;
    }
    else if(sales>500 && sales<=2000)
    {
        sales-=500;
        comm=35+(sales*0.1);
    }
    else if(sales>2000 && sales<=5000)
    {
        sales-=2000;
        comm=185+(sales*0.12);
    }
    else if(sales>5000)
    {
        comm=(sales*0.125);
    }
    printf("Calculated commission: %lf",comm);
}
