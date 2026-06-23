#include <stdio.h>
/*Печать таблицы и пересчет градусов из цельсия в Фаренгейты */




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

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /*Нижняя граница температур*/
    upper = 300; /*Верхняя граница*/
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d \t %1d \n ", fahr, celsius);
        fahr = fahr + step;
    }

}