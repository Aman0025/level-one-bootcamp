//WAP to find the sum of n complex numbers using structures and 4 or more functions.
#include <stdio.h>
int a[50],count,sum=0;

int count()
{
    printf("Enter the count for the total numbers: ");
    scanf("%d",&count);
    return count;
}
int input(int coun)
{
    printf("Enter the Numbers to be added:");
    for(int i =0;i<count;i++)
 {
        scanf("%d",&a[i]);
 }
    for(int i =0;i<count;i++)
 {
     sum=sum+a[i];
}
    return sum;
}
int display()
{
    printf("The sum of the given numbers is: %d",sum);
}

int main()
{
    int n=count();
    int s =input(n);
    display(s);
}
