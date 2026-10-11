#include <stdio.h>

// Program to find the sum of the ten natural numbers.

int main(void)
{
    int sum = 0;

    for(int i = 0; i <= 10; i++)
    {
        sum+=i;
    }
    printf("The sum of the ten natural number is %d.\n", sum);
}
