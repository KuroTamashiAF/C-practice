#include <stdio.h>
/*Упражнение 1.17. Напишите программу печати всех вводимых строк, содержащих более 80 символов.*/
#define MAXSYMBOLS 100
#define limit_symbols 10

int lenght(char arr[]);

int main()
{
    int len;
    char arr[MAXSYMBOLS];

    while (len = lenght(arr))
    {
        // printf("%d - lenght\n", len);
        if (len > limit_symbols)
            printf("%s\n", arr);
    }
}
int lenght(char arr[])
{
    int c;
    int i;
    for (i = 0; i < MAXSYMBOLS - 1 && ((c = getchar()) != EOF && c != '\n'); i++)
        arr[i] = c;
    
    if (c == '\n')
    {
        if ( i < MAXSYMBOLS-1)
        {
            arr[i] = c;
            i++;
        }
    }
    if (i < MAXSYMBOLS)
        arr[i] = '\n';
    else
        arr[MAXSYMBOLS-1] = '\0';
    return i;
}
