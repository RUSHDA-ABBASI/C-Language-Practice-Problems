#include<stdio.h>
//formula = pi x r^2
int main(){
     float r;
     printf("enter radius of circle: ");
     scanf("%f", &r);

     float area;
     area = 3.14 * r * r;

     printf("area of circle is: %f", area);

  return 0;
}