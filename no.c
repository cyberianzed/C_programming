#include <stdio.h>
#define BASE 10 // 0 to 9

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    printf("Enter any number: ");
    scanf("%lld", &num);
    /* Initialize frequency array with 0 */
    for (i = 0; i < BASE; i++)
    {
        freq[i] = 0;
    }

    n = num;

    while (n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for (i = 0; i < BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}