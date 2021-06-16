/******************************************************************
 * File         :   2.14
 * Description  :   Absolute value
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   10/06/2021
  
2.14 Write a program to find the absolute value of a number entered through the keyboard.
******************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, value;

    printf("Enter Numbers :\n");

    scanf("%d%d", &num1, &num2);

    value = num1 - num2;

    if (value < 0)        //Finding absolute value if the "value" is negative
    {
        value *= -1;
    }

    printf("\nAbsolute value : %d", value);

    return 0;
}