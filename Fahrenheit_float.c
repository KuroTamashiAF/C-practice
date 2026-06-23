#include <stdio.h>
/*печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */


void scanf_example()
{
    int num0, num1;
    printf("enter number:");
    scanf("%d %d",&num0, &num1);
    printf("you entered %d %d",num0, num1);
}

int main()
{
    // scanf_example();

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /*Нижняя граница температур*/
    upper = 300; /*Верхняя граница*/
    step = 20;

    fahr = lower;
    // printf("Celsius\tFarenheit\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%-celsius = %3.0f \t Farenheit = %6.1f \n ", fahr, celsius);
        fahr = fahr + step;
    }

}