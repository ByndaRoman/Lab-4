#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "RU");
    int x, y;
    float a, b, res;
    printf("Введiть значення x ");
    scanf_s("%d", &x);
    printf("Введiть значення y ");
    scanf_s("%d", &y);

    a = x * y + 2 * x - pow(x, y);
    b = sin(x) + x * y - 2 * x + y;
    res = a / b;
    printf("Результат %lf", res);
}