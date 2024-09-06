// Objective : Swapping  Values of 2 int using third variable

# include<stdio.h>
int main()
{
    int a,b,c;

    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

     printf("Enter Your First Number :");
     scanf("%d",a);

    printf("Enter Your Second Number :");
    scanf("%d",b);

    
    c=a; // assigning value of a to c
    printf("New Value Of integer c is : %d\n",c);

    a=b; // assigning value of b to a
     printf("New Value Of integer a is : %d\n",a);// here value of a is also 20 not 0. So, it can overwrite the value

    b=c; // assigning value of c  to b
    printf("New Value Of integer b is : %d\n",b);

    return 0;
}