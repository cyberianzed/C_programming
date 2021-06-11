/******************************************************************
 * File         :   2.2
 * Description  :   Solve some roots
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.2 Write a C Program to find the roots of a Quadratic Equation.
******************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    //initialising variable
    float a, b, c, discriminant, root1, root2, real, img;

    printf("\nEnter the value of coefficient a, b, c :\n");
    scanf("%f%f%f", &a, &b, &c);

    //nature of root
    discriminant = b * b - (4 * a * c);

    //real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The value of roots are %.2f and %.2f\n", root1, root2);
    }

    // both roots are equal
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("The value of roots are %.2f and %.2f\n", root1, root2);
    }
   
    //both roots are real and imaginary
    else if (discriminant < 0)
    {
        real = -b / (2 * a);
        img = sqrt(-discriminant) / (2 * a);
        printf("The value of roots are %.2f+%.2fi and %.2f-%.2fi\n", real, img, real, img);
    }
    return 0;
}