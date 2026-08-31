#include <stdio.h>
int main()
{
    int maths, chem, eng, cs, phy;
    printf("Enter marks of maths: ");
    scanf("%d", &maths,"\n");
    printf("Enter marks of chemistry: ");
    scanf("%d", &chem,"\n");
    printf("Enter marks of english: ");
    scanf("%d", &eng, "\n");
    printf("Enter marks of computer science: ");
    scanf("%d", &cs, "\n");
    printf("Enter marks of physics: ");
    scanf("%d", &phy,"\n");
    int t=maths+chem+phy+eng+cs;
    printf("Total marks out of 500: %d \n", t);
    printf("Total percentage: %f", t/5.0);
    return 0;
}