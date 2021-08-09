/******************************************************************
 * File         :   2.28
 * Description  :   HCF and LCM
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   25/06/2021

2.28
******************************************************************/
#include <stdio.h>

int hcf(int a, int b) // Recursive function to return hcf
{
    if (b == 0) //iterate till the reminder becomes 0
        return a;
    return hcf(b, a % b); //using Euclids algoirthm
}

int main()
{
    int a, b, result, lcm;

    printf("input Numbers : ");
    scanf("%d%d", &a, &b);

    result = hcf(a, b);
    lcm = (a * b) / result;
    printf("HCF of %d and %d is %d\n", a, b, result);
    printf("LCM of %d and %d is %d", a, b, lcm);
    return 0;
}
