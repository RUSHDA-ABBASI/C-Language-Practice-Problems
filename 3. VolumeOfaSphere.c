#include<stdio.h>
int main(){
    //formula = 4/3 x pi x r^3
float r;
    printf("enter radius of sphere: ");
    scanf("%f", &r);
    
float volume;
 volume = (4.0/3.0) * 3.14 * r*r*r;

 printf("volume of the sphere of given radius %f is %f.", r, volume);

 return 0;
}