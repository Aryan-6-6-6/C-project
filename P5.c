// Read Numbers for 5 Subjects and print their Sum and Average

#include<stdio.h>
int main()
{
    int a,b,c,d,e,Sum,Average;

printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");
//a is English
    printf("Enter Your English Marks :");
    scanf("%d",a);

//b is Maths
     printf("Enter Your Maths Marks :");
    scanf("%d",b);

//c is C Language
     printf("Enter Your C Language Marks :");
    scanf("%d",c);

// d is Web Technology

     printf("Enter Your Web Technology Marks :");
    scanf("%d",d);

    //e Is Writing Skill

     printf("Enter Your Writing Skill Marks :");
    scanf("%d",e);

    Sum =a+b+c+d+e;
    printf("Your Total Marks Is %d", Sum);

    Average = Sum/500;
     printf("Your Percentage In Semester 1 Is %d",Average);

     return 0;

}