#include <stdio.h>

int main()
{
    int n, m, val;

    printf("Enter Numbers\n");

    scanf("%d%d", &n, &m);

    val = n - m;

    if (val < 0)
    {
        val *= -1;
    }

    printf("\n%d", val);

    return 0;
}