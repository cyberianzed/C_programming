#include <stdio.h>
void main()
{
    int m, n;
    printf("Input the  value of m :");
    scanf("%d", &m);

    (m == 0)  ? (printf("The value of n =  0\n"))
    : (m > 0) ? (printf("The value of n =  1\n"))
              : (printf("The value of n =  1\n"));
}