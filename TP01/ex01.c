#include <stdio.h>

int main(void)
{
    int number;
    int i;

    number = 10;
    i = 0;
    while (i < number)
    {
        printf("%d\n", i);
        i++;
    }
    return (0);
}