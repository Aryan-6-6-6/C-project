// Objective : Read Temparature in Celcius and Convert It into Farenheit and vice - versa

#include<stdio.h>
int main()
{

    float F,C,T; // T means Temparature
   
    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Room Temparature In Celcius is :"); // .2 means decimal places expand upto 2 digits
    scanf("%f", &T);
     F = (T*9.0/5)+32; // Taking .0 as 9/5 =1 in int and to make it float we'll add .0 

    printf("Temparature IN Farenheit is : %.2f\n",F); // .2 means decimal places expand upto 2 digits


     C = (F-32)*5.0/9; // Checking Whether Temparature is True or Not

    printf("Room Temparature in Celcius is : %f\n",C); // by default decimal value goes upto 6 digits
    
    return 0;

}