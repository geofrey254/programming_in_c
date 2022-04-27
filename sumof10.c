// Write a C program to find the sum of first 10 natural numbers.
#include <stdio.h>

int main()
{
    int i;
    int total=0;

    for (i=1; i<=10; i++){
        total = total + i;
        printf("%d\n", i);
    }
    printf("%d ", total);

}