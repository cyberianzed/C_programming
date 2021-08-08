/******************************************************************
 * File         :   2.23
 * Description  :   Prime numbers in range
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021
  
2.23 Write a program in C to find the prime numbers within a range of numbers. 
Test Data : Input starting number of range: 1 
Input ending number of range : 50 
Expected Output : 
The prime number between 1 and 50 are : 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
******************************************************************/
#include <stdio.h>

int prime();    //Function declaration
int main()
{
    int range0, range1;
    printf("Input starting number of range : ");
    scanf("%d", &range0);
    printf("Input ending number of range : ");
    scanf("%d", &range1);

    for (int n = range0; n <= range1; n++)
    {
        prime(n);   //Function call
    }
}

int prime(int n)    //Function definition
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0 && n != 1)
        printf("%d\t", n);
}