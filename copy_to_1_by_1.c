#include <stdio.h>
#include <stdbool.h>

/*Копирование ввода на вывод*/

int main()
{
    bool c;
    while ((c = getchar()) != EOF)
    {
        printf("%d!!!!!!!!\n", c);
        putchar(c);
    }
}