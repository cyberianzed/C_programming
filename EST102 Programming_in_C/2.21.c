/******************************************************************
 * File         :   2.21
 * Description  :   Am i divisible ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021
  
2.21 Write a program in C to find the number 
and sum of all integer between 100 and 200 which are divisible by 9.
Expected Output : Numbers between 100 and 200, 
divisible by 9 : 108 117 126 135 144 153 162 171 180 189 198 
The sum : 1683
******************************************************************/
#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 100; i <= 200; i++)
    {
        if (i % 9 == 0) //checking whether the number is perfectly dividible by 9
        {
            printf("%d\t", i);
            sum += i;
        }
    }
    printf("\nsum = %d", sum);
}