#include <iostream>
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_CTYPE, "RU");
    int x;
    float res = 0;
    printf("Введiть значення x ");
    scanf_s("%d", &x);

    
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            res += (i + 2) / (j + x);
        }
    }
    printf("Результат %6.10lf", res);
}