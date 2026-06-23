#include <stdio.h>

/* посчет строк входного потока */

int main()
{
    int c;
    c = getchar();
    printf("%c\n", c);
    while (c != EOF)
    {
        printf("%c\n", getchar());
    }
    return 0;
}
