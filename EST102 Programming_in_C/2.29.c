/******************************************************************
 * File         :   2.29
 * Description  :   Perfect Number
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   08/08/2021

2.29
******************************************************************/
#include <stdio.h>

int main()
{
    int num, sum = 0, rem;

    printf("Input Number : ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0) //checking for perfect divisers
            sum += i; //adding the perfeect divisers
    }
    if (sum == num)
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);
}