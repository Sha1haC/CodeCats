#include<stdio.h>
int main()
{  int n;
   printf("Enter a number ");
   scanf("%d",&n);
   if((n&1)==0)
    printf("Given number is Even");
   else
    printf("Given number is Odd");
   return 0;
}
