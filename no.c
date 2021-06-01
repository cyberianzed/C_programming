#include <stdio.h>

int main()
{

    int n, ld = 1;
    int a, b, c, d, e, f, g, h, i, j;
    a = b = c = d = e = f = g = h = i = j = 0;

    scanf("%d", &n);

    while (ld > 0)
    {
        ld = n % 10;

        n /= 10;

        switch (ld)
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        case 7:
            g++;
            break;
        case 8:
            h++;
            break;
        case 9:
            i++;
            break;

        default:
            break;
        }
    }

    printf("0 %d\n", j);
    printf("1 %d\n", a);
    printf("2 %d\n", b);
    printf("3 %d\n", c);
    printf("4 %d\n", d);
    printf("5 %d\n", e);
    printf("6 %d\n", f);
    printf("7 %d\n", g);
    printf("8 %d\n", h);
    printf("9 %d\n", i);
}