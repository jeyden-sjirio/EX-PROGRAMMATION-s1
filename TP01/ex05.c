#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int total;

    number = 8;
    i = 1;
    total = 0;
    while (i <= number)
    {
        total = total + i;
        i++;
    }
    printf("%d", total);
    return (0);
}

