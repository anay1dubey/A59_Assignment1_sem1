#include <stdio.h>
int main()
{
    char c;
    printf("Enter a charecter: ");
    scanf(" %c",&c);
    int ascii=(int)c;
    printf("Entered charecter is small case: %s", (ascii>=97 && ascii<=127) ? "yes" : "no"); //directly used inside
}