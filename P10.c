// Objective : Swapping  Values of 2 int  WITHOUT using third variable

# include<stdio.h>
int main()
{
    int a,b;

    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Your First Number : ");
    scanf("%d", &a);
    printf("Enter Your Second Number : ");
    scanf("%d", &b);


    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swapped Values are %d and %d respectively",a,b);

    return 0;
}
