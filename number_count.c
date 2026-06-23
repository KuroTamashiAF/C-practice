#include <stdio.h>
/*подсчет вводимых символов*/

int main()
{
    int nc;
    int save;
    nc = 0;

    while ((save = getchar()) != EOF)
    {
        if (save != '\n')
        {
            ++nc;
        }
    }
    printf("%d\n", nc);
}