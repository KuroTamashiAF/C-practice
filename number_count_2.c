#include <stdio.h>

int main()
{
    double nc;
    int save;
    for (nc = 0; (save = getchar()) != EOF; ++nc)
        if (save != '\n')
            --nc;
    printf("%.0f", nc);
}