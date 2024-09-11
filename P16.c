// Objctive : Take Input from User and Find Total Bill Value and allow 10% Discount on it

#include<stdio.h>
int main()
{
    int item_no1,item_no2,item_no3,quantity1,quantity2,quantity3,price1,price2,price3,total1,total2,total3,Total,Net_total;

    printf("Name : Aryan Gupta\n Class : 1A\n Program : BCA\n");

    printf("Enter Item no  ");
    scanf("%d", &item_no1);

    printf("Enter Item no 1 Quantity :");
    scanf("%d",&quantity1);

    printf("Enter Price for Item 1 :");
    scanf("%d",&price1);

    printf("Enter Item no ");
    scanf("%d",&item_no2);

     printf("Enter Item no 2 Quantity :");
    scanf("%d",&quantity2);

    printf("Enter Price for Item 2 :");
    scanf("%d",&price2);


    printf("Enter Item no ");
    scanf("%d",&item_no3); 

    printf("Enter Item no 3 Quantity :");
    scanf("%d",&quantity3);

    printf("Enter Price for Item 3 :");
    scanf("%d",&price3);

    total1 = price1*quantity1;
    total2 = price2*quantity2;
    total3 = price3*quantity3;

    Total = total1+total2+total3;
    printf("Your Total Bill is : %d\n ",Total);

    Net_total = Total - Total*10/100;
    printf("Bill after 10 Percent discount is : %d",Net_total);

    return 0;
    
}