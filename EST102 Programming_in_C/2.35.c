/******************************************************************
 * File         :   2.35
 * Description  :   Floyd's Triangle
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   08/08/2021

2.26
******************************************************************/
#include <stdio.h>

int main()
{
    int i, n, j, num = 1;

    printf("Input number of rows : ");
    scanf("%d", &n);
    //n = 5;

    for (i = 1; i <= n; i++) //rows
    {
        for (j = 1; j <= i; j++) //columns
        {
            printf("%d\t", num); //numbers in increasing order
            num++;
        }
        printf("\n");
    }
}