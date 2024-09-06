#include<stdio.h>
#define Pie 3.14
int main()
{
    float r,c,a; 
    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Radius : ");
    scanf("%f", &r); // r is radius

    a = Pie*r*r; // a is area
    printf("Area is : %.2f",a);

    c = 2*Pie*r; // c is circumference
    printf("Circumference is : %.2f",c);
    
    return 0;
}