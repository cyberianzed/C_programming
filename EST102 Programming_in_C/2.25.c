/******************************************************************
 * File         :   2.25
 * Description  :   Display the cube of the number upto given an integer
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021

2.25
******************************************************************/
#include <stdio.h>

int main()
{
    int range0, cube;

    printf("Input range : ");
    scanf("%d", &range0);

    for (int i = 1; i <= range0; i++)
    {
        cube = i * i * i;   //calculating cube of the number(i)
        printf("Number is : %d and cube of the %d is : %d \n", i, i, cube);
    }
}
