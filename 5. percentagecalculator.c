#include<stdio.h>
//calculate percentage of 5 subjects
int main(){
    int subjects = 5;
    float maths = 90;
    float physics = 87;
    float english = 78;
    float chemistry = 94;
    float biology = 98;

   float percentage;
   percentage = (maths + physics + english + chemistry + biology)/subjects;

   printf("percentage is: %f", percentage);

   return 0;
}