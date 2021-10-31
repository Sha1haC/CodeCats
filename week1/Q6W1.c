#include<stdio.h>
int main()
{
    int n;
    printf("Enter week number between 0 to 6 ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:printf("%d is for Sunday",n); break;
        case 1:printf("%d is for Monday",n); break;
        case 2:printf("%d is for Tuesday",n); break;
        case 3:printf("%d is for Wednesday",n); break;
        case 4:printf("%d is for Thursday",n); break;
        case 5:printf("%d is for Friday",n); break;
        case 6:printf("%d is for Saturday",n); break;
        default:
            printf("Enter a number between 0 to 6");
    }
    return 0;
}
