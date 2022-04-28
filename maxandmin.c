/**
 * @file maxandmin.c
 * @author Maina Geofrey (devongeoffreymaina@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// The following program will ask the user to input 5 numbers and print out the maximum and minimum numbers from the set.

#include <stdio.h>

int main()
{
    int max, min, inpn, x;
    printf("Input no.1: ");
    scanf("%d", &inpn);
    max = inpn;
    min = inpn;

    //call first number as current maximum and minimum
    for(x = 2;x <= 5; ++x)
    {
        printf("input no.%d: ",x);
        scanf("%d", &inpn);

        if(inpn > max)
        //if next number is bigger than current maximum then store it
        {
            max = inpn;
        }
        if(inpn < min)
        //if next number is smaller than current minimum then store it
        {
            min = inpn;
        }
    }
    printf("The maximum number is %d\n", max);
    printf("The minimum number is %d\n",min);

    return 0;
}
