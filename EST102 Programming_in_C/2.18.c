/******************************************************************
 * File         :   2.18
 * Description  :   Check your Remark
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   11/06/2021
  
2.18 Write a program in C to accept a grade and declare the equivalent description
Grade      Description        
E          Excellent
V          Very Good
G          Good
A          Average
F          Fail
******************************************************************/
#include <stdio.h>

int main()
{
    int grade;

    printf("Enter your grade(E, V, G, A, F) :\n");
    scanf("%c", &grade);
    printf("Remarks :\n\n");

    //Using switch statement to identify which remark to print
    do
    {
        switch (grade)
        {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        // default:
        //     printf("Enter a correct grade\n");
        //     break;
        }
    } while (grade=='q');
}