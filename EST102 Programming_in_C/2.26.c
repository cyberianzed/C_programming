/******************************************************************
 * File         :   2.26
 * Description  :   Binary Number to Decimal
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021

2.26
******************************************************************/
#include <stdio.h>

int main()
{
    int binary, cube, num, temp, result, pow = 1;

    printf("Input a Binary no : ");
    scanf("%d", &binary);

    temp = binary;
    while (binary > 0)       //for iteraterating depending on count of digits
    {
        num = binary % 10;      //get last number
        result += num * pow;    //multiplying the number to base of 2
        binary /= 10;           //remove last number
        pow *= 2;
    }
    printf("\nThe Binary Number : %d\n", temp);
    printf("The equivalent Decimal Number : %d", result);
}
