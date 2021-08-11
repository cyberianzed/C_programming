/******************************************************************
 * File         :   2.30
 * Description  :   Diamond
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/08/2021

2.30
******************************************************************/
#include <stdio.h>

void printDiamond(int n) // function to print pattern with 2n rows
{
    int space = n - 1;

    for (int i = 0; i < n; i++) //number of rows
    {
        // loop for inserting space before printing star (ie,row-1 spaces)
        for (int j = 0; j < space; j++)
            printf(" ");

        // Printing star after spaces (ie,star=row)
        for (int j = 0; j <= i; j++)
            printf("* ");

        printf("\n");
        space--;
    }

    space = 0; //we need to add spaces from 0 to 4

    for (int i = n; i > 0; i--) // Repeat again in reverse order
    {
        for (int j = 0; j < space; j++) //0 to 4
            printf(" ");

        for (int j = 0; j < i; j++) //star = vlaue of i
            printf("* ");

        printf("\n");
        space++;
    }
}

int main()
{
    printDiamond(4);
    return 0;
}