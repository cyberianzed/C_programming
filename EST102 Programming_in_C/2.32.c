/******************************************************************
 * File         :   2.32
 * Description  :   Pattern
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021

2.26
******************************************************************/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) //rows
    {
        for (j = 0; j < i; j++) //columns
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++) //rows for2nd half
    {
        for (j = n - 1; j >= i; j--) //columns
        {
            printf("*");
        }
        printf("\n");
    }
}