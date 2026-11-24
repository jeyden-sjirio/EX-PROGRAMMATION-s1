#include <stdio.h>

int main(void)
{
    int age;

    age = 19;
    if (age <= 1)
        printf("bonjour bébé !");
    else if (age <= 14)
        printf("bonjour mes petits !");
    else if (age <= 30)
        printf("bonjour jeune homme !");
    else if (age <= 60)
        printf("bonjour monsieur !");
    else
        printf("bonjour papy !");
    return (0);
}