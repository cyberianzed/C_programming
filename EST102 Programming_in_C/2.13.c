/******************************************************************
 * File         :   2.13
 * Description  :   Electricity bill
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   11/06/2021
  
2.13 Write a program in C to calculate and print the Electricity bill of a given customer. 
The customer id., name and unit consumed by the user should be taken from the keyboard 
and display the total amount to pay to the customer. 
The charges are as follow:
Unit                                                Charge/unit
upto 199                                            @1.20 
200 and above but less than 400                     @1.50              
400 and above but less than 600                     @1.80 
600 and above                                       @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged 
and the minimum bill should be of Rs. 100/-
******************************************************************/
#include <stdio.h>

int main()
{
    float customerId, unit, charge, temp;
    char name[20];

    printf("Enter your Name :\n");
    scanf("%s", name);
    printf("Enter your customer id :\n");
    scanf("%f", &customerId);
    printf("Enter unit consumed :\n");
    scanf("%f", &unit);

    //calcualting bill wrt to the range of unit used
    if (unit < 199)
    {
        charge = unit * 1.20;
        if (charge < 100)
        {
            charge = 100;
        }
    }
    else if (unit < 400)
    {
        temp = unit * 1.50;
        charge = temp + (temp * .15);
    }
    else if (unit < 600)
    {
        temp = unit * 1.80;
        charge = temp + (temp * .15);
    }
    else if (unit < 600)
    {
        temp = unit * 2.00;
        charge = temp + (temp * .15);
    }

    printf("------------------------------------\n");
    printf("Electricity bill\n\n");
    printf("Name : %s\n", name);
    printf("Customer id : %.0f\n", customerId);
    printf("Total amount to pay : %.3f\n\n", charge);
    printf("------------------------------------\n");
}