/******************************************************************
 * File         :   2.6
 * Description  :   Odd or Even ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.6 Any integer is input through the keyboard.
Write a program to find out whether it is an odd number or even number.
******************************************************************/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a Number :\n");
    scanf("%d", &number);

    //Checking whether the number is odd or even
    (number % 2 == 0) ? (printf("Number is Even")) :
                        (printf("Number is Odd"))  ;
    return 0;
}