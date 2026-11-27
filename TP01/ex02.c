#include <unistd.h>

int main(void)
{
    int number;
    int i;
    char *text;

    number = 3;
    text = "wouaf wouaf\n";
    i = 0;
    while (i < number)
    {
        write(1, text, 11);
        i++;
    }
    return (0);
}