/******************************************************************
 * File         :   2.8
 * Description  :   Leap year ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.8 Any year is input through the keyboard.
    Write a program to determine whether the year is a leap year or not.
******************************************************************/
#include <stdio.h>

int main()
{

    int year;
    printf("Enter a year to check if it is a leap year or not \n");
    scanf("%d", &year);

    //Checking whether the year is a leap year
    (year % 4 == 0 && year % 100 != 0) ? printf("%d is a Leap Year", year)
                   : (year % 400 == 0) ? printf("%d is a Leap Year", year)
                   : printf("%d is not a Leap Year", year);

    return 0;
}