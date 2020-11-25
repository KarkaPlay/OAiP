#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, x, d;
	int array[] = { 5, 0, 2, 4, 1, 3 };
	int n = sizeof(array) / sizeof(int); // Объявление массива и необходимых переменных

	for (d = n / 2; d > 0; d /= 2) // Сравниваем элементы на расстоянии шага
		for (i = d; i < n; i++) 
		{
			x = array[i];
			for (j = i; j >= d; j -= d) 
				if (x < array[j - d])  // Если порядок неверный, меняем местами, затем уменьшаем шаг
					array[j] = array[j - d];
				else 
					break;
			array[j] = x;
		}

	for (i = 0; i < n; i++) // Вывод упорядоченного массива
	{
		printf("%d ", array[i]);
	}
}
