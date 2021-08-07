/******************************************************************
 * File         :   2.19
 * Description  :   Vowel or Consonant ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   11/06/2021
  
2.19 Write a C Program to check Whether a Character is Vowel or Consonant
******************************************************************/
#include <stdio.h>
int main()
{

    int vowel;
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c", &c);

    //returns 1 if any of the case matches
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
             c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (vowel == 1)
    {
        printf("\n%c is a Vowel", c);
    }
    else
    {
        printf("\n%c is a Consonant", c);
    }
}