#include<stdio.h>

int main()
{
    int no,fact,i;
    fact=1;

    printf("Enter No to find factorial: ");
    scanf("%d", &no);
    
    if (no<0){
       printf("Enter a positive no ");
    }
    
    else{
        for(i=1; i<=no; i=i+1){
    
        fact=fact*i;
    }

    printf("The factorial of %d is %d",no,fact);

    }  
    return 0;
}