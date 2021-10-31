#include<stdio.h>
int main()
{
    int n,p,n1=0;
    printf("Enter a number ");
    scanf("%d",&n);
    p=n;
     while(n>0)
     {
         n1=n1+(n%10)*(n%10)*(n%10);
         n=n/10;
     }
     if(p==n1)
      printf("Given Number is Armstrong");
     else
      printf("Given Number is not Armstrong");
    return 0;
}
