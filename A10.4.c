//first N natural numbers using function(TSRN)
#include<stdio.h>
void print(int);
int main()
{
   int n;
   print(n);
   return 0;
}
void print(int n)
   {
     int i;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf("first %d natural numbers :\n",n);
     for(i=1; i<=n; i++)
          printf("%d  ",i);

   }
