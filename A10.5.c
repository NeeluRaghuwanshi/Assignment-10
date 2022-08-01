//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
   int n;
   odd(n);
   return 0;
}
void odd(int n)
   {
     int i;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf("first %d 0dd numbers :\n",n);
     for(i=1; i<=n; i++)
          printf("%d  ",2*i-1);

   }
