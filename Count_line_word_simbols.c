#include <stdio.h>

#define IN 1  // ИМЕНОВАННЫЕ КОНСТАНТЫ 
#define OUT 0 // ИМЕНОВАННЫЕ КОНСТАНТЫ

int main()
{
    int c, ns, nw, nl;
    ns = nw = nl = 0;
    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++ns;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d", ns, nw, nl);
    return 0;
}

// #include <stdio.h>
// #define IN 1  /* внутри слова */
// #define OUT 0 /* вне слова */
// /* подсчет строк, слов и символов */
// int main()
// {
//     int c, nl, nw, nc, state;
//     state = OUT;
//     nl = nw = nc = 0;
//     while ((c = getchar()) != EOF)
//     {
//         ++nc;
//         if (c == '\n')
//             ++nl;

//         if (c == ' ' || c == '\n' || c == '\t')
//             state = OUT;
//         else if (state == OUT)
//         {
//             state = IN;
//             ++nw;
//         }
//     }
//     printf("%d %d %d\n", nl, nw, nc);
// }