/******************************************************************
 * File         :   2.20
 * Description  :   Straight line ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   11/06/2021
  
2.20 Given three points (x1, y1), (x2, y2) and (x3, y3),
write a program to check if all the three points fall on one straight line.
Hint: We ask the user to enter all 3 points (x1, y1), (x2, y2) and (x3, y3). 
Next we calculate slope of (x1, y1), (x2, y2) and (x2, y2) (x3, y3).
If slopes of both these points are equal, 
then all these 3 points lie on same straight line.
******************************************************************/
#include <stdio.h>

int main()
{
    float y1, y2, y3, x1, x2, x3, slope1, slope2;

    printf("Enter coordinates (x1,y1):\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinates (x2,y2):\n");
    scanf("%f%f", &x2, &y2);
    printf("Enter coordinates (x2,y2):\n");
    scanf("%f%f", &x3, &y3);

    //calculating slope of points
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        printf("\nPoints (%.2f,%.2f), (%.2f,%.2f), (%.2f,%.2f) lie on the same line\n", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("\nPoints (%.2f,%.2f), (%.2f,%.2f), (%.2f,%.2f) do not lie on the same line\n", x1, y1, x2, y2, x3, y3);
    }
}