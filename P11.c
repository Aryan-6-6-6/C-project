// OBJECTIVE : Read input from user at runtime and convert time from Hours to Minutes and vice-versa

#include<stdio.h>
int main ()
{
    int T1,T2,T3; 

    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Time in Hours : ");
    scanf("%d", &T1);

    T2 = T1*60; // T2 is Minute
    T3 = T1*60*60; // T3 is Seconds

    // Task 1 - convert hour to seconds

    T1=T3;
    printf("Time is %d seconds\n1", T1);
    
    // Task 2 - conert hour to minute
    
    T1=T2;
    printf("Time is %d minutes \n",T1);
    
    //Task 3 - conert minute to seconds
    
    T2=T3;
        printf("Time is %d seconds",T2);

    return 0;
}