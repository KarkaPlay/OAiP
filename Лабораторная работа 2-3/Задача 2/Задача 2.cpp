#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("ax^2 + bx + c\n");

    printf("Введите a: ");
    float a;
    scanf_s("%f", &a);

    printf("Введите b: ");
    float b;
    scanf_s("%f", &b);

    printf("Введите c: ");
    float c;
    scanf_s("%f", &c);

    if (a == 0)  //Если a=0, то уравнение линейное
    {
       float x = -c / b;
       printf("x = %f\n", x);
    }
    else  //Иначе, уравнение квадратное
    {
        float d = b*b - 4*a*c;  //Дискриминант
        float x1 = (-b - sqrt(d))/(2*a);
        float x2 = (-b + sqrt(d)) / (2 * a);
        printf("x1 = %f\nx2 = %f", x1, x2);
    }
}