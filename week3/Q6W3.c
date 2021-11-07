#include<stdio.h>
int main()
{
    int n,i,num;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n],count=0;
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
            count++;
    }
    printf("%d appeared %d in the array",num,count);
    return 0;
}
