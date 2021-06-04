#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter 3 Numbers");
    scanf("%d\n%d\n%d", &a, &b, &c);

    (a > b && a > c) ? (printf("%d greatest", a))
           : (b > c) ? (printf("%d greatest", b))
                     : (printf("%d greatest", c));
}