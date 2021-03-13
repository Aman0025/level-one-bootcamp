//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
    float h,b,d,x;
    printf("Enter height");
    scanf("%f",&h);
    printf("Enter depth");
    scanf("%f",&d);
    printf("Enter breadth");
    scanf("%f",&b);
    x=((h*d*b)+(d/b)*1/3);
    printf("volume of tromboloid is %f",x);
}
