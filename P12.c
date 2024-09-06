// Objective : To Find Area and perimeter from user

#include<stdio.h>
int main ()
{
    int A,P,W,L; // A is Area and P is Perimeter

    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Length : ");
    scanf("%d", &L);

    printf("Enter Width : ");
    scanf("%d", &W);

    A = L*W; // A is Area
    printf("Area of Rectangle is : %d \n",A);

    P = (L+W)*2; // P is Perimeter
    printf("Perimeter of Rectangle is : %d \n",P);

    return 0;
}