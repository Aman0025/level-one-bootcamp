//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,b,d,x;
    printf("enter height: ");
    scanf("%f",&h);
    printf("enter breadth: ");
    scanf("%f",&b);
    printf("enter depth: ");
    scanf("%f",&d);
    x=((h*b*d)+(d/b)*(1/3));
    printf("volume of tromboloid is %f",x);
    return(0);
}
