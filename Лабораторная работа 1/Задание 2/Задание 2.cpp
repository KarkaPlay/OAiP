#include <stdio.h>;
#include <iostream>;

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Выражение -2 / (x + 5) + 6*x\n");
	printf("Введите число x\n");
	int x;
	scanf_s("%d", &x);

	if (x == -5) {
		printf("Результат не определен");
	}
	else {
		float y = (float)x;
		y = -2 / (y + 5) + 6 * y;
		printf("Результат выражения - ");
		printf("%f", y);
	}
}
