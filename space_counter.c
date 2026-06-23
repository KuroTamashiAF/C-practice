#include <stdio.h>

int main()
{
    int c;
    int space_counter, string_counter, tab_counter;
    space_counter = 0;
    string_counter = 0;
    tab_counter = 0;

    c = getchar(); // получаем строку

    while (c != EOF)
    {
        switch (c)
        {
        case '\n':
        {
            ++string_counter;
            c = getchar();
            break;
        }
        case ' ':
        {
            ++space_counter;
            c = getchar();
            break;
        }
        case '\t':
        {
            ++tab_counter;
            c = getchar();
            break;
        }
        default:
            c = getchar();
            break;
        }
        
    }
    printf("number spases = %d number tab = %d number line = %d", space_counter, tab_counter, string_counter);
}