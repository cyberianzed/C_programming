#include <stdio.h>

int main()
{

    char c;

    printf("Would you like your computer to explode?\n");

    c = getchar();

    if (c == 'Y' || c == 'y')
    {
        printf("OK: Configuring computer to explode now.\n");
        printf("\nBye!\n");
    }
    else
    {

        printf("Okay. Whew!\n");
    }

    return 0;
}