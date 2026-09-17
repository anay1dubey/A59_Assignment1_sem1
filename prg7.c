#include <stdio.h>
int main()
{
    int p;
    double b;
    printf("Enter units of power consumed: ");
    scanf("%d",&p);
    if(p<=200)
    {
        b=p*0.5;
    }
    else if(p>200 && p<=400)
    {
        p-=200;
        b=100+p*0.65;
    }
    else if(p>400 && p<=600)
    {
        p-=400;
        b=230+p*0.8;
    }
    else if(p>600)
    {
        p-=600;
        b=430+p*1.25;
    }
    printf("Your bill is: %lf",b);
}