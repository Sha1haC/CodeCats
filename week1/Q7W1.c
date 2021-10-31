#include<stdio.h>
int main()
{
    int n,n1=0,i,ar[9]={1,2,5,10,20,50,100,200,500,2000};
    printf("Enter the Amount ");
    scanf("%d",&n);
    for(i=8;i>=0;i--)
    {
        n1=n1+n/ar[i];
        n=n%ar[i];
    }
    printf("Number of Notes in given amount is %d",n1);
    return 0;
}
