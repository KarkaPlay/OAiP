#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("x^2 + bx + c = 0\n");

    printf("Введите b: ");
    int b;
    scanf_s("%d", &b);

    printf("Введите c: ");
    int c;
    scanf_s("%d", &c);

    printf("x^2 + %dx + %d\n", b, c);

    float d = b*b - 4*c;
    int x1 = (-b - sqrt(d)) / 2;
    int x2 = (-b + sqrt(d)) / 2;

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);

}