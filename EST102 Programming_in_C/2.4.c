/******************************************************************
 * File         :   2.4
 * Description  :   Profit or Loss ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.4 If cost price and selling price of an item are input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
******************************************************************/
#include <stdio.h>

int main()
{
    float percent, costPrice, sellingPrice;

    printf("Enter costPrice and sellingPrice :\n");
    scanf("%f%f", &costPrice, &sellingPrice);

    //find percentage of proifit or loss
    percent = (sellingPrice - costPrice) / costPrice * 100;

    //Checking whether the seller has made profit or loss
    if (sellingPrice > costPrice)
    {
        printf("The seller has made profit of %.2f %%\n", percent);
    }
    else
    {
        printf("The seller has incurred loss of %.2f %%\n", percent);
    }
    return 0;
}
