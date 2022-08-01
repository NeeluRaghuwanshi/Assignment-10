//function to print all prime factors of a given numbers.(TSRN)
#include<stdio.h>
void primefact(int);
int main()
  {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    primefact(n);
    return 0;
  }
void primefact(int n)
  {
    int i;
    for(i=2;n!=1;i++)
      {
        while(n%i==0)
          {
            n=n/i;
            printf("%d,",i);
          }
      }
  }
