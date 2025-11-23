#include<stdio.h>
int main(){
    long x;
    long y;
    printf("Enter x: ");
    scanf("%ld",&x);
    printf("Enter y: ");
    scanf("%ld",&y);

    double z = (double)x/(double)y;//type casting
    printf("%.20f",z);//floating_point imprecision

}