#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,x;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Prime Numbers up to %d are:\n",n);
    for(i=2;i<=n;i++)
    {
        if(i==2)
          x=1;
        else
        {
          for(j=2;j<=sqrt(n);j++)
           {
              if(i%j==0)
              {
                x=0;
                break;
              }
              else
                x=1;
           }
        }

        if(x==1)
           printf("%d\n",i);
    }
    return 0;
}
