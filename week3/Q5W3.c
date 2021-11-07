#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements of array ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    int sum=0,esum=0,osum=0,epe_sum=0,ope_sum=0;
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
        if(ar[i]%2==0)
           esum+=ar[i];
        else
           osum+=ar[i];
        if(i%2==0)
            epe_sum+=ar[i];
        else
            ope_sum+=ar[i];
    }
    printf("Sum of all elements of an array = %d\n",sum);
    printf("Sum of even elements of an array = %d\n",esum);
    printf("Sum of odd elements of an array = %d\n",osum);
    printf("Sum of even position elements of an array = %d\n",epe_sum);
    printf("Sum of odd position elements of an array = %d\n",ope_sum);
    return 0;
}
