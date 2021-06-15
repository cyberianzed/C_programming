/******************************************************************
 * File         :   2.11
 * Description  :   Find my shape ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   10/06/2021
  
2.11 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene 
Hint: Equilateral triangle: All three sides are equal. 
Isosceles triangle: All two sides are equal.
Scalene triangle: No sides are equal.
******************************************************************/
#include <stdio.h>
 
int main()
{
   int side1, side2, side3;
    printf("Enter sides of a Triangle\n");
    scanf("%d%d%d", &side1, &side2, &side3);

   //Checking shape of the triangle
    (side1 == side2 && side1 == side3) ? (printf("\nTriangle is Equilateral"))
              : (side2 == side3 || side1==side3 || side1==side2) ? (printf("\nTriangle is Isoceles"))
              : (printf("\nTriangle is Scalene")); 
              
}