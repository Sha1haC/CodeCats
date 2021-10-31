#include<stdio.h>
int main()
{ int phy,chem,bio,math,comp;
   printf("Enter the marks of:\n");
   printf("Physics  = ");
   scanf("%d",&phy);
   printf("Chemestry  = ");
   scanf("%d",&chem);
   printf("Biology  = ");
   scanf("%d",&bio);
   printf("Mathematics  = ");
   scanf("%d",&math);
   printf("Computer  = ");
   scanf("%d",&comp);
   int total=phy+chem+bio+math+comp;
   int percent=(total*100)/500;
   if(percent>=90)
     printf("your percentage is %d and Grade A",percent);
   else if(percent>=80)
     printf("your percentage is %d and Grade B",percent);
   else if(percent>=70)
     printf("your percentage is %d and Grade C",percent);
   else if(percent>=60)
     printf("your percentage is %d and Grade D",percent);
   else if(percent>=40)
     printf("your percentage is %d and Grade E",percent);
   else
     printf("your percentage is %d and Grade F",percent);
   return 0;
}
