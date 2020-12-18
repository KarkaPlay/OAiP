#include <stdio.h>

int main() 
{
    int i, j, min, buf, N = 7; // Объявление необходимых переменных
    int array[] = { 6, 4, 1, 5, 3, 7, 2 }; // Объявление массива

    for (i = 0; i < N - 1; i++) // Движемся по всему массиву, кроме последнего элемента
    {
        for (j = i + 1, min = i; j < N; j++) // Находим локальный максимум
            if (array[j] < array[min])
                min = j;

        buf = array[i];  // Меняем местами сравниваемое число и локальный максимум
        array[i] = array[min];
        array[min] = buf;
    }

    for (i=0; i<N; i++)  // Вывод упорядоченного массива
        printf("%d ", array[i]);
}
