#include <stdio.h>
/*апишите программу, печатающую гистограммы частот встречаемости вводимых
символов.*/
#define MAXSYMBOLS 256

int main()
{
    int c, counter, i;
    int length[MAXSYMBOLS];
    // char clength[MAXSYMBOLS];
    counter = i = 0;
    // избавление от мусора
    for (i; i < MAXSYMBOLS; i++)
    {
        length[i] = 0;
    }

    // счет количества символов
    while ((c = getchar()) != EOF)
    {
        if (c < MAXSYMBOLS)
        {
            length[c]++;
        }
    }
    // вывод

    for (i = 0; i < MAXSYMBOLS; i++)
    {
        if (length[i] > 0)
        {
            if (i == ' ')
                printf("' ' : ");
            else if (i == '\t')
                printf("\\t : ");
            else if (i == '\n')
                printf("\\n : ");
            else
                printf("%c : ", i);

            for (int j = 0; j < length[i]; j++)
                putchar('|');
            printf("\n");
        }
    }
}
