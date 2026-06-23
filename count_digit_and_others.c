#include <stdio.h>
/*подсчет цифр, символов-разделителей и прочих символов*/

#define END 10

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;

    for (i = 0; i < END; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            printf("%d \n", c);
            ++ ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("Digits=");
    for (i = 0; i < END; ++i)
        printf("%d ", ndigit[i]);
    printf("Separator characters = %d and Others = %d", nwhite, nother);
}