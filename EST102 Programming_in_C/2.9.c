/******************************************************************
 * File         :   2.7
 * Description  :   Hot or Cold ?
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.9 Write a C program to read temperature in centigrade
and display a suitable message according to temperature state below
Temperature < 0 then Freezing weather
Temperature 0-10 then Very Cold weather 
Temperature 10-20 then Cold weather 
Temperature 20-30 then Normal in Temp 
Temperature 30-40 then Its Hot 
Temperature >=40 then Its Very Hot
******************************************************************/
#include <stdio.h>

int main()
{
    int temperature;

    printf("Enter temperature in Celcius:\n");
    scanf("%d", &temperature);
    printf("Weather check :\n\n");

    //printing a suitable message according to temperature state 
    if (temperature < 0)
    {
        printf("Freezing weather\n");
    }
    else if (temperature >= 40)
    {
        printf("Its Very Hot\n");
    }
    else
    {
        switch (temperature)  //using switch to check the range
        {
        case 0 ... 9:
            printf("Very Cold weather\n");
            break;
        case 10 ... 19:
            printf("Cold weather\n");
            break;
        case 20 ... 29:
            printf("Normal in Temp\n");
            break;
        case 30 ... 39:
            printf("Its Hot\n");
            break;
        default:
            printf("Incorrect input\n");
            break;
        }
    }
}