//function to calculate number of combinations. (TSRS)
#include<stdio.h>
int fact(int);
int comb(int ,int );
int main()
   { int n ,r;
     printf("enter value of n and r\n");
     scanf("%d %d",&n,&r);
     printf("Number of combinations are : %d",comb(n,r));
     return 0;

   }

 int fact(int n)
   {
      int fa=1,i;
      for(i=1;i<=n;i++)
      fa=fa*i;
      return fa;
   }
int comb(int n,int r)
   {
       return fact(n)/(fact(r)*fact(n-r));
   }


