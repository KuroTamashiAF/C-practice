#include <stdio.h>
#define MAXSYMBOLS 100

int fill_arr(char arr[]);
void reverse(char arr[], char r_arr[], int len);

int main()
{

    char r_arr[MAXSYMBOLS] = {0};
    char arr[MAXSYMBOLS] = {0};
    int len = fill_arr(arr);
    printf("\n%s - %d \n", arr, len);
    reverse(arr, r_arr, len);
    printf("\n%s\n", r_arr);
}

int fill_arr(char arr[])
{
    int c;
    int i = 0;
    while (i < MAXSYMBOLS - 1 && ((c = getchar()) != EOF) && c != '\n')
    {
        arr[i] = c;
        i++;
    }
    if (i < MAXSYMBOLS)
        arr[i] = '\0';
    else
        arr[MAXSYMBOLS - 1] = '\0';

    return i;
}

void reverse(char arr[], char r_arr[], int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        r_arr[len - 1 - i] = arr[i];
    }
    arr[len] = '\0';
}
