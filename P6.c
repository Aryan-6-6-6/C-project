// Objective : Take Float Input from user and print their Sum,Difference,Product and Average

#include<stdio.h>
int main()
{
    float n,m;

printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Your First Number :");
    scanf("%f",&n);

    printf("Enter Your Second Number : ");
    scanf("%f",&m);

    float Sum = n+m;
    printf("Total Number Is : %f\n",Sum);

    float Difference = n-m;
    printf(" Difference is : %f\n",Difference);

    float Product = n*m;
    printf("Product Is : %f\n",Product);
    // another way printf("Product Is : %f\n",n*m);


    float avg = Sum/2;
    printf("Average Of above number is %f\n",avg);

    return 0;
}