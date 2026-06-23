#include <stdio.h>
/*преобразование температур Фаренгейт - Цельсий функция*/

float Fahrenheit_celsius(float fahr)
{

    return (fahr - 32) * 5 / 9;
}

int main()
{
    float temp;
    scanf("%f", &temp);
    printf("temp F = %5.2f, C = %5.2f", temp, Fahrenheit_celsius(temp));
}
