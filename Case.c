#include <stdio.h>

int main()
{

    char c;

    scanf("%c", &c);

    switch (c)
    {
    case 'a' ... 'z':
        printf("Lower case character");
        break;
    case 'A' ... 'Z':
        printf("Upper case character");
        break;

    default:
        printf("Enter Alphabet");
        break;
    }
}