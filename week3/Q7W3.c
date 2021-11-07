#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter size of array ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    int p=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        p--;
    }
     /* for(i=0;i<n;i++)
    {
       printf("%d ",ar[i]);
    }
    printf("\n");   */
    printf("Largest is %d\n",ar[n-1]);
    printf("Smallest is %d\n",ar[0]);
    printf("Second Largest is %d\n",ar[n-2]);
    printf("Second Smallest is %d",ar[1]);
    return 0;
}
