#include <stdio.h>
/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/
#define MAX_WORDS 100

int main()
{
    int c, i, word_count = 0; // с= для getchar(), i = для циклов, word_count = счетчик слов
    int lengs[MAX_WORDS];     // контейнер для хранения длин слов
    int counter = 0;

    // уборка от мусорных значений инициализация массива
    for (i = 0; i < MAX_WORDS; i++)
        lengs[i] = 0;
    // подсчет длин слов в контейнер массив
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (counter > 0)
            {
                lengs[word_count++] = counter;
                counter =0;
            }
        }
        else
            ++counter;
    }
    // проверка если последнее слово не закончилось пробелом

    if (counter > 0 && word_count < MAX_WORDS)
    {
        lengs[++word_count] = counter;
    }

    // Вывод гистограммы
    for (i = 0; i < word_count; i++)
    {
        printf(" word %d ", i);
        for (int j = 0; j < lengs[i]; j++)
        {
            putchar('|');
        }
        printf("\n");
    }
    return 0;
}