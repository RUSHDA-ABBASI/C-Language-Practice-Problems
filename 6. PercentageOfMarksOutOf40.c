#include<stdio.h>
int main(){
    int totalMarks = 160; // 40 * 4;
    float x1 = 37;
    float x2 = 33;
    float x3 = 32;
    float x4 = 36;

    float percentage;
    percentage = (x1 + x2 + x3 + x4)*100/totalMarks;

    printf("percentge is: %f", percentage);

    return 0;
}