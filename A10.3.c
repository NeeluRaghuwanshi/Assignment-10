//function to check whether a given number is even or odd.
//Return 1 if the number is even, otherwise return 0.(TSRS)
#include<stdio.h>
int check(int);
int main()
    {
       int x;
       printf("Enter a number\n");
       scanf("%d",&x);
       printf("%d",check(x));
       return 0;
    }
int check(int a)
    {
       if(a%2==0)
         return 1;
       else
         return 0;
    }
