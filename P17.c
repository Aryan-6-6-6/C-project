// Objective : find Maximum of Two Numbers Using Conditional Operator

#include<stdio.h>
int main()
{
    int a,b,max;
   // char max;
    

    printf("Enter First Number :");
    scanf("%d",&a);

    printf("Enter Second Number :");
    scanf("%d",&b);

    max = (a>b) ? a : b;

    printf(" Greater Number is : %d",max);

    return 0;

}