// Write a program in C to print first 50 natural numbers using recursion.
#include <stdio.h>

int num(int n)
{
    // check if n is less than or equal to 50
    if (n <= 50)
    {
        printf(" %d", n);
        num(n+1);
    }
}

int main()
{
    int n = 1;
    num(n);
}