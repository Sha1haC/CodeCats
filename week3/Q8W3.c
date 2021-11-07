#include<stdio.h>
char coin[100];
void coin_flip(int *N )
{  int j,k;
     for(j=0;j<*N;j++)
    {
        for(k=0;k<=j;k++)
        {
          if(coin[k]=='H')
            coin[k]='T';
          else
            coin[k]='H';
        }
    }
}
void face_count(int *N,int *Q)
{
    int j,count=0;
           if(*Q==1)
           {
               for(j=0;j<*N;j++)
                  if(coin[j]=='H')
                   count++;
           }
           else
           {
               for(j=0;j<*N;j++)
                  if(coin[j]=='T')
                    count++;
           }
           printf("%d\n",count);
}
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    int g[t];
    for(i=0;i<t;i++)
    {
       scanf("%d",&g[i]);
    }
    for(i=0;i<t;i++)
  { int p=g[i];
    int arr[p][3];
    int I,N,Q;
    for(i=0;i<p;i++)
    {
        for(j=0;j<3;j++)
          scanf("%d",&arr[i][j]);
    }
    for(i=0;i<p;i++)
    {   I=arr[i][0];
        N=arr[i][1];
        Q=arr[i][2];

        if(I==1)
        {
           for(j=0;j<N;j++)
           {
               coin[j]='H';
           }
           coin_flip(&N);
           face_count(&N,&Q);
        }
        else
        {
            for(j=0;j<N;j++)
           {
               coin[j]='T';
           }
           coin_flip(&N);
           face_count(&N,&Q);
        }
    }
  }
    return 0;
}
