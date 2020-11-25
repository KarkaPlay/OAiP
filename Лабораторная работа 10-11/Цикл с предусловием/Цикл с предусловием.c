#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, x, d;
	int array[] = { 5, 0, 2, 4, 1, 3 };
	int n = sizeof(array) / sizeof(int);
	d = n / 2;  // Объявление массива и необходимых переменных

	while (d > 0) // Пока шаг больше нуля
	{
		i = d;
		while (i < n) 
		{
			x = array[i];
			j = i;
			while (j >= d) 
				if (x < array[j - d]) // Если порядок неверный, меняем местами
				{
					array[j] = array[j - d];
					j = j - d;
				}
				else 
					break;
			array[j] = x;
			i++;
		}
		d = d / 2;  // Уменьшаем шаг
	}

	for (i = 0; i < n; i++) // Вывод упорядоченного массива
	{
		printf("%d ", array[i]);
	}
}