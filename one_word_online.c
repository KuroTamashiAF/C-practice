#include <stdio.h>

int main()
/*Напишите программу, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке.
1.6.*/
{
    int c;

    while ((c = getchar() != EOF))
    {
        if (c == ' ')
            putchar('\n');
        else
            putchar(c);
    }
}