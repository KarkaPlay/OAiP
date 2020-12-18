#include <stdio.h>

int main()
{
    int i=0, j, min, buf, N = 7; // Объявление необходимых переменных
    int array[] = { 6, 4, 1, 5, 3, 7, 2 }; // Объявление массива

    while (i < N - 1) // Движемся по всему массиву, кроме последнего элемента
    {
        j = i + 1;
        min = i;
        while (j < N) // Находим локальный максимум
        {
            if (array[j] < array[min])
                min = j;
            j++;
        }
        buf = array[i]; // Меняем местами сравниваемое число и локальный максимум
        array[i] = array[min];
        array[min] = buf;
        i++;
    }

    for (i = 0; i < N; i++)  // Вывод упорядоченного массива
        printf("%d ", array[i]);
}
