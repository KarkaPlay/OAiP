#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("(ax-b)/2 + ab = 0\n");

    printf("Введите a: ");
    float a;
    scanf_s("%f", &a);

    printf("Введите b: ");
    float b;
    scanf_s("%f", &b);

    float x = (b / a) - 2 * b;

    printf("x = %f\n", x);
}