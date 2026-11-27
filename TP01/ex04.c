#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int delta;
    int i;
    int racine;

    a = 1;
    b = -5;
    c = 6;
    delta = b * b - 4 * a * c;
    printf("Delta = %d\n", delta);
    if (delta < 0)
        printf("Il n'existe aucune solution");
    else
    {
        racine = 0;
        i = 0;
        while (i * i <= delta)
        {
            racine = i;
            i++;
        }
        if (racine * racine == delta)
        {
            if (delta == 0)
                printf("Il existe 1 solution\nx = %d", -b / (2 * a));
            else
            {
                printf("Il existe 2 solutions\n");
                printf("x1 = %d\n", (-b - racine) / (2 * a));
                printf("x2 = %d\n", (-b + racine) / (2 * a));
            }
        }
        else
            printf("Delta positif, racine non entière");
    }
    return (0);
}