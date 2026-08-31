#include <stdio.h>
int main()
{
    char c;
    printf("Enter a charecter: ");
    scanf(" %c",&c);
    int ascii=(int)c; //explicit typecasting
    if(ascii>=65 && ascii<=90)
    {
        printf("Charecter is a capital letter");
    }
    else if(ascii>=97 && ascii<=122)
    {
        printf("Charecter is a small letter");
    }
    else if(ascii>=48 && ascii<=57)
    {
        printf("Charecter is a digit");
    }
    else
    {
        printf("Charecter is a symbol");
    }
}