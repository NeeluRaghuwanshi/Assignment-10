//function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
   { int n;
     fact(n);
     return 0;

   }

 int fact(int n)
   {
      int fa=1,i;
      printf("enter a number\n");
      scanf("%d",&n);
      for(;n>=1;n--)
      fa=fa*n;
      printf("Factorial is %d",fa);
      return 1;
   }
