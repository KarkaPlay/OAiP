#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int array[] = { 1, 4, 5, 0, 3, 2 }; // Объявление массива и необходимых переменных
    int n = sizeof(array) / sizeof(int);
    float k = 1.247; // фактор уменьшения
    int step = n - 1;
    while (step >= 1) // поак шаг больше 0
    {
        int i = 0; // начинаем с 0-ого элемента
        while (i < n - step) 
        {
            if (array[i] > array[i + step]) // если текущий элемент больше, меняем местами
            {
                int temp = array[i];
                array[i] = array[i + step];
                array[i + step] = temp;
            }
            i++;
        }
        step /= k; // уменьшаем расстояние на фактор уменьшения
    }

	for (int i = 0; i < n; i++)  // вывод отсортированного массива
		printf("%d ", array[i]);
}