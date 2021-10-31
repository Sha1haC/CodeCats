#include<stdio.h>
int main()
{
   int basic,gross;
   printf("Enter your basic salary ");
   scanf("%d",&basic);
   if(basic<=10000)
     gross=basic+basic*20/100+basic*80/100;
   else if(basic<=20000)
     gross=basic+basic*25/100+basic*90/100;
   else
     gross=basic+basic*30/100+basic*95/100;
   printf("Your Gross Salary is %d",gross);
   return 0;
}
