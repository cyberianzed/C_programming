/******************************************************************
 * File         :   2.5
 * Description  :   Eligible ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   11/06/2021
  
2.5 Write a C program to find the 
eligibility of admission for a professional course based on the following criteria: 
Eligibility Criteria: Marks in Maths >=65 and 
Marks in Physics >=55 and 
Marks in Chemistry>=50 and 
Total in all three subject >=190 or Total in Maths and Physics >=140
******************************************************************/
#include <stdio.h>
int main()
{
    float maths, physics, chemistry, total;

    printf("\nEner the marks of Maths : ");
    scanf("%f", &maths);
    printf("Enter the marks of Physics : ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry : ");
    scanf("%f", &chemistry);

    total = maths + physics + chemistry;

    //Checking if the student is eligible according to the criteria
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || maths + physics >= 140)
    {
        printf("\nCongratulation! You are Eligible");
    }
    else
    {
        printf("\nSorry, You are not Eligible");
    }
}
