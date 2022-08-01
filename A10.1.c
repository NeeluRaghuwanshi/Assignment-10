//function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);
int main()
  {
    float x;
    printf("Enter the radius of circle\n");
    scanf("%f",&x);
    printf("Area of circle is %.2f",area(x));
  }

float area(float r)
  {
    return 3.14*r*r;
  }
