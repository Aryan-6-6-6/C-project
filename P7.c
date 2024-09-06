// Objective : 

#include<stdio.h>
#define rate 15
int main()
{
    int P,T; 
    float SI;
    printf("Enter Time in Years : ");
    scanf("%d", &T);

    printf("Enter Principle Amount In Rupees : ");
    scanf("%d", &P);

    SI = (P*rate*T)/100.0;
    printf(" Your Interest Is %f",SI);
    return 0;

}