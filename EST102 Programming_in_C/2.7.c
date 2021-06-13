/******************************************************************
 * File         :   2.7
 * Description  :   Report card
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.7 Write a C program to read roll no, name and marks of three subjects 
and calculate the total, percentage.
If the percentage of the marks >=75 then print First Class with Distinction 
If the percentage of the marks >=60 and <75 print First Class
If the percentage of the marks <60 print Second Class
******************************************************************/
#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, roll, total, percent;
    char name[20];

    printf("Enter your Name :\n");
    scanf("%s", name);
    printf("Enter your Roll no :\n");
    scanf("%d", &roll);
    printf("Enter your Marks for subject 1 :\n");
    scanf("%d", &sub1);
    printf("Enter your Marks for subject 2 :\n");
    scanf("%d", &sub2);
    printf("Enter your Marks for subject 3 :\n");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percent = (float)total / 300 * 100;

    printf("------------------------------------\n");
    printf("Report Card\n\n");
    printf("Student Name : %s\n", name);
    printf("Roll no : %d\n", roll);
    printf("Total marks scored : %d\n", total);
    printf("Total Percentage :%.0f\n", (float)percent);
    printf("\nRemarks :\n");

    //Using switch statement find the grade scored by the student
    switch (percent)
    {
    case 0 ... 59:
        printf("Second Class\n");
        break;
    case 60 ... 74:
        printf("First Class\n");
        break;
    case 75 ... 100:
        printf("First Class with Distinction\n");
        break;
    default:
        printf("No grades\n");
        break;
    }
    printf("------------------------------------\n");
}
