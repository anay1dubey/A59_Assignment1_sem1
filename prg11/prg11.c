#include <stdio.h>
int main()
{
    int sec, th, ts, tm;
    printf("Enter seconds: " );
    scanf("%d", &sec);
    th=sec/3600;
    tm=(sec-(th*3600))/60;
    ts=sec-(th*3600)-(tm*60);
    printf("The time is %d hrs, %d min and %d sec",th,tm,ts);
    return 0;
}
