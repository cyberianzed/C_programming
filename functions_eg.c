#include <stdio.h>

void display(int marks[], int size)
{
    int counter;
    for (counter = 0; counter < size; counter++)

    {
        printf("The array element at %d is %d\n", counter, marks[counter]);
    }
}
void main()
{
    int size;
    printf("Enter range to Print\n");
    scanf("%d", &size);
    printf("\n");

    int marks[10] = {4, 6, 77, 83, 22, 33};
    display(marks, size);
}