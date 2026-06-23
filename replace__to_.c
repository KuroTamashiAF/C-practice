#include <stdio.h>
/*Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.*/

int main()
{
    int c;
    int last_was_space = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!last_was_space)
            {
                putchar(c);
                last_was_space = 1;
            }
        }
        else
        {
            putchar(c);
            last_was_space = 0;
        }
    }

    return 0;
}