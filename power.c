// #include <stdio.h>
// /*тест функции power*/

// #define END 10

// long power(long m, int n);

// int main()
// {
//     int i;
//     for (i = 0; i < END; i++)
//     {
//         printf("%11d %11d %3d \n", power(2, i), power(-3, i), i);
//     }
//     return 0;
// }

// long power(long m, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         m *= m;
//     }
//     return m;
// }
#include <stdio.h>
int power(int, int);
/* тест функции power */
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}
/* возводит base в п-ю степень; n >= 0 */
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}