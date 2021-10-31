#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n==2)
        x=1;
    else
  {
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            x=0;
            break;
        }
        else
            x=1;
    }
  }

    if(x==1)
      printf("%d is a prime number",n);
    else
      printf("%d is not a prime number",n);
    return 0;
}

