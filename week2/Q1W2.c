#include <stdio.h>
int main()
{  int i,n,sum=0;
   printf("Enter a number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {  printf("%d ",i);
   }
   sum=(n*(n+1))/2;
   printf("\nSum is %d",sum);
   return 0;
}


