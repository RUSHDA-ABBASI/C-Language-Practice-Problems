//take two integers as input, a and b where a>b, find the remainder when a is divided by b.
//divisor x quotient + remainder = dividend
//remainder = dividend - divisor x quotient 
#include<stdio.h>
int main(){
    int a,b;
    printf("enter dividend: ");
    scanf("%d", &a);
    printf("enter divisor: ");
    scanf("%d", &b);

    float quotient;
    quotient = a/b;

    int remainder;
    remainder = a - (b*quotient);
    
    printf("remainder when %d is divided by %d is %d", a,b,remainder);

    return 0;
}