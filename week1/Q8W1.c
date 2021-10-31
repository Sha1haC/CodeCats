#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("For Quadratic Equation of the form ax^2 + bx + c\n");
    printf("Enter the coefficient of x^2  ");
    scanf("%d",&a);
    printf("Enter the coefficient of x ");
    scanf("%d",&b);
    printf("Enter the constant term ");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d<0)
     printf("Roots are imaginary");
    else
    {
       x1=(-b+sqrt(d))/2*a;
       x2=(-b-sqrt(d))/2*a;
       printf("Roots are : %2.2 f %2.2 f",x1,x2);
    }
    return 0;
}
