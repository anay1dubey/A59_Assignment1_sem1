#include <stdio.h>
int main()
{
    const int earthTP=31558150;
    int day,hour,min;
    day=earthTP/(24*3600);
    hour=(earthTP-(day*24*3600))/3600;
    min=(earthTP-(day*24*3600)-(hour*3600))/60;
    printf("Earth takes %d days, %d hours and %d minutes to revolve around sun",day,hour,min);
}