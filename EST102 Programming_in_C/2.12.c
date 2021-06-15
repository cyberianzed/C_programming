/******************************************************************
 * File         :   2.12
 * Description  :   Am I valid ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   10/06/2021
  
2.12 Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
******************************************************************/
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    
    printf("Enter angles of a Triangle\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    //Using if else to check the input is true for a triangle
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("Triangle is Valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }
}