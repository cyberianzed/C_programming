/******************************************************************
 * File         :   2.10
 * Description  :   who is the youngest ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.10 If the ages of Ram, Shyam and Ajay are input through the keyboard,
    write a program to determine the youngest of the three
******************************************************************/
#include <stdio.h>
 
int main()
{
   int a, b, c;
    printf("Enter age of Ram Shyam and Ajay\n");
    scanf("%d%d%d", &a, &b, &c);

    //Checking youngest of the three
    (a < b && a < c) ? (printf("\nRam is %d years old and is the youngest", a))
           : (b < c) ? (printf("\nShyam is %d years old and is the youngest", b))
                     : (printf("\nAjay is %d years old and is the youngest", c)); 
}