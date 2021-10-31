#include<stdio.h>
int main()
{
    int n,n1=1,i;
    printf("Enter an Number ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        n1*=i;
    }
    printf("Factorial of %d is %d",n,n1);
    return 0;
}
