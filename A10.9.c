//function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int check(int,int);
int main()
   {
     int n,d;
     printf("Enter a number and a digit to check\n");
     scanf("%d %d",&n,&d);
     printf("%d",check(n,d));

     return 0;

   }
int check(int n,int d)
    {  int rem;
       while(n)
        {
          rem=n%10;
          if(rem==d)
            return 1;
            n=n/10;

        }
        return 0;
    }
