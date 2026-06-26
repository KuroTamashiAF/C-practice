#include <stdio.h>

#define MAXLINE 1000 // МАКСИМАЛЬНЫЙ РАЗМЕР ВВОДИМОЙ СТРОКИ

int getline(char line[]);
void copy(char to[], char from[]);

/*печать самой длиной строки */
int main()
{
    int len;               /*длина текущей строки*/
    int max;               /*Длина максимальной из просмотренных строк*/
    char line[MAXLINE];    /*текущая строка*/
    char longest[MAXLINE]; /*самая длинная строка*/
    max = 0;
    while ((len = getline(line)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /*была ли хоть 1 строка */
        printf("\n %s - %d \n", longest, max);
    return 0;
}
/* getline: читает строку в s, возвращает длину */
int getline(char s[])
{
    int c, i;
    i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (i < MAXLINE - 1)
        {
            s[i] = c;
            ++i;
        }
        else
            i++;
    }
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return i;
}

/* copy: копирует из 'from' в 'to'; to достаточно большой */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}