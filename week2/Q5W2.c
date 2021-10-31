#include<stdio.h>
int main()
{
    int n,p,n1=0,i;
    printf("Enter a number ");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
      n1=n1*10+n%10;
      n=n/10;
    }
    printf("%d in reverse oder is %d",p,n1);
    return 0;
}
