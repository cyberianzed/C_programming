#include<stdio.h>

int main() {
    
    int mark[50],i;
    printf("Enter 5 marks \n");

    for (i = 1; i <=5; i++)
    {
        scanf("%d", &mark[i]);
    }
    printf("\n\nEntered marks are : \n");
    for (i = 1; i <=5; i++)
    {
        printf("%d\n",mark[i]);
    }
    
    return 0;    
}