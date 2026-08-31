#include <stdio.h>
int main()
{
    int p,c,m,e;
    printf("Enter marks in physics: ");
    scanf("%d",&p);
    printf("Enter marks in maths: ");
    scanf("%d",&m);
    printf("Enter marks in chemistry: ");
    scanf("%d",&c);
    printf("Enter marks in entrance exam: ");
    scanf("%d",&e);
    float cm=p/2.0 +c/2.0 + m/2.0 + e;
    printf("cutoff marks: %f",cm);
    return 0;
}
