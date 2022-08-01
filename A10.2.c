//function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple(float,float,float);
int main()
  {
    float x,y,z;
    printf("Enter principle amount\n");
    scanf("%f",&x);
    printf("Enter rate of interest\n");
    scanf("%f",&y);
    printf("Enter time period\n");
    scanf("%f",&z);
    printf("Simple interest is %.2f rs",simple(x,y,z));
  }

float simple(float p,float r,float t)
  {
    return (p*r*t)/100;
  }

