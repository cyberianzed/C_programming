/******************************************************************
 * File         :   2.22
 * Description  :   number pattern
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021
  
2.22 Write a program in C to display the such a pattern 
for n number of rows using a number 
which will start with the number 1 and 
the first and a last number of each row will be 1.
  1 
 121 
12321
******************************************************************/
#include <stdio.h>

int main()
{
  int i, j, n;

  printf("Enter number of rows: ");
  scanf("%d", &n);
  //n = 5;

  for (i = 1; i <= n; i++)  //loop for the rows
  {
    for (j = 1; j <= n - i; j++)  //loop for the printing space
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)  //loop for the printing numbers upto row order
    {
      printf("%d", j);
    }

    for (j = i - 1; j >= 1; j--)  //loop for the printing numbers in decreasing order(row-1)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}