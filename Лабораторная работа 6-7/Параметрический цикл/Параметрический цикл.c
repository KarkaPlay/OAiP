#include <stdio.h>

int main() {
	int array[] = { 1, 4, 5, 0, 3, 2 }; // ќбъ€вление массива и необходимых переменных
	int n = sizeof(array) / sizeof(int);
	float k = 1.247; // фактор уменьшени€
	for (int step = n - 1; step >= 1; step /= k) // от максимального рассто€ни€ между сравниваемыми элментами движемс€ к 1
		for (int i = 0; i < n - step; i++)
			if (array[i] > array[i + step]) // сравниваем текущий элемент и наход€щийс€ от него на рассто€нии step
			{
				int temp = array[i];  // если текущий элемент больше, мен€ем их местами
				array[i] = array[i + step];
				array[i + step] = temp;
			}
	
	for (int i = 0; i < n; i++)  // вывод отсортированного массива
		printf("%d ", array[i]);
}