#include <stdio.h>

int main()
{

    int j, a, e, i, o, u;
    a = e = i = o = u = 0;
    char s[40];

    printf("Enter a Word ");
    scanf("%s", s);

    for (j = 0; s[j] != '\0'; j++)
    {
        if (s[j] == 'a')
        {
            a++;
        }
        else if (s[j] == 'e')
        {
            e++;
        }
        else if (s[j] == 'i')
        {
            i++;
        }
        else if (s[j] == 'o')
        {
            o++;
        }
        else if (s[j] == 'u')
        {
            u++;
        }
        }
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\n", a, e, i, o, u);
}