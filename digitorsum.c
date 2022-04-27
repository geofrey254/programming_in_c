// Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.

#include <stdio.h>

int main(void)
{
    printf("%d\n", test(30, 10));
    printf("%d\n", test(20, 10));
    printf("%d\n", test(10, 10));
}

int test(int n, int m)
{
    return n == 30 || m == 30 || (n + m == 30);    
}