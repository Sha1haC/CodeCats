#include<stdio.h>
int main()
{ int n,i,SE=0,SO=0;
   printf("Enter a Number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if((i&1)==0)
        SE+=i;
        else
        SO+=i;
   }
   printf("Sum of Even Numbers up to %d is %d\n",n,SE);
   printf("Sum of Odd Numbers up to %d is %d\n",n,SO);
   return 0;
}

