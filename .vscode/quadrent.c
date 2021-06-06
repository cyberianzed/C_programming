/*Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. Go to the editor
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant. */

#include <stdio.h>
void main()
{
    int co, fn, sn;
    printf("Enter coordinate :\n");
    scanf("%d %d", &fn, &sn);

    if (fn > 0)
        if (sn > 0)
            printf("In 1st Quadrent");
        else

            printf("In 4th Quadrent");

    if (fn < 0)
        if (sn < 0)
            printf("In 3rd Quadrent");
        else

            printf("In 2nd Quadrent");
}