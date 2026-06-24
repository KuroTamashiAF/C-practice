#include <stdio.h>

int power(int, int);
/* power: возводит base в n-ю степень: n >= 0 версия 2; */

int main()
{
    int numb;
    scanf("%d", &numb);
    printf("%d - %d", numb, power(numb, 3));
}

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}