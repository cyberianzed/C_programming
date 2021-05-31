#include<stdio.h>

int main()
{
    int no,fact=1,i=1;

    printf("Enter No to find factorial: ");
    scanf("%d", &no);
    
    if (no<0){
       printf("Enter a positive no ");
    }
    
    else{
        while(i<=no){
        fact=fact*i;
        i=i+1;  
        //printf("%d ",fact);
    }
    printf("The factorial of %d is %d",no,fact);

    }  
    return 0;
} 
