//function to calculate number of arrangements. (TSRS)
#include<stdio.h>
int fact(int);
int main()
   { int n ,r;
     printf("enter value of n and r\n");
     scanf("%d %d",&n,&r);
     printf("Number of arrangements  are : %d",perm(n,r));
     return 0;

   }

 int fact(int n)
   {
      int fa=1,i;
      for(i=1;i<=n;i++)
      fa=fa*i;
      return fa;
   }
int perm(int n,int r)
   {
       return fact(n)/fact(n-r);
   }


