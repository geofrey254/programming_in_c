// Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
#include <stdio.h>

int main()
{
    int n = 20;
    int j = 20;
    int sum;
    sum = n + j;

    if (n == j){
        printf("%d", 3*sum);
    }
    else{
        printf("%d", sum);
    }

    return 0;
}