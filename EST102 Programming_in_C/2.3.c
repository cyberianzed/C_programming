/******************************************************************
 * File         :   2.3
 * Description  :   Check if you're eligible to vote
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.3 Write a C program to read the age of a candidate
and determine whether it is eligible for casting his/her own vote.
Test Data: 21
Expected Output: Congratulation! You are eligible for casting your vote.
******************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your Age : ");
    scanf("%d", &age);

    //Checking whether the candidate is eligible to vote
    (age >= 18) ?
    (printf("Congratulations! You are eligible for casting your vote\n")) :
    (printf("Sorry! wait for %d more years to vote\n", 18 - age));
}