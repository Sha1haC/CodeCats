#include<stdio.h>
int main()
{
    int n,p,n1=1,i;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Enter its power ");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        n1=n1*n;
    }
    printf("%d^%d = %d",n,p,n1);
}

