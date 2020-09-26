#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("kx + 2k/x > a\n");

    printf("Введите a: ");
    float a;
    scanf_s("%f", &a);

    printf("Введите x: ");
    float x;
    scanf_s("%f", &x);

    int k = 0;
    float y = 0;
    while (y<a)
    {
        k = k + 1;
        y = k*x + 2*k/x;
    }
    printf("k = %d", k);
}