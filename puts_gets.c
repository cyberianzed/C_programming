
#include <stdio.h>
#include <stdlib.h>
int main()
{
float height_in_cm;
char height_in_inches[4];
//float height_in_inches;

puts("Enter your height in inches:");
//print a string only to your screen
//printf("Enter your height in inches:");

gets(height_in_inches);
//gets take the input as string
//scanf("%f",height_in_inches);

height_in_cm = atoi(height_in_inches)*2.54;
//atoi used for converting string into an integer
//height_in_cm = height_in_inches*2.54;

printf("You are %.2f centimeters tall.\n",height_in_cm);
//.2f used for giving out two 2 nos after point(float)

return(0);
}