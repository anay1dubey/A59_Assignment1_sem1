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
    if(t>400 && t<=500)
    {
        printf("Graded A");
    }
    else if(t>300 && t<=400)
    {
        printf("Graded B");
    }
    else if(t>200 && t<=300)
    {
        printf("Graded C");
    }
    else if(t>166 && t<=200)
    {
        printf("Graded D");
    }
    else
    {
        printf("Graded F");
    }
}