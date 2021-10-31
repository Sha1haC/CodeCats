#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character ");
    scanf("%c",&a);
    if(((a>='A')&&(a<='Z'))||((a>='a')&&(a<='z')))
        printf("%c is a Alphabet",a);
    else if((a>='0')&&(a<='9'))
        printf("%c is a Number",a);
    else
        printf("%c is a Special Character",a);
    return 0;
}
