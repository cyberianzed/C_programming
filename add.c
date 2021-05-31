#include <stdio.h>

int max(int fn, int sn)
{
    if (fn > sn)
        return fn;
    else
        return sn;
}
int min(int fn, int sn)
{
    if (fn < sn)
        return fn;
}

int main()
{
    int sn, fn, sum, i;

    printf("Enter Two Numbers\n");
    scanf("%d\n %d", &fn, &sn);

    for (i = min(fn, sn); i <= max(fn, sn); i++)
    {
        sum = fn + i;
    }

    printf("\nThe sum of %d and %d are :%d", fn, sn, sum);
    return 0;
}