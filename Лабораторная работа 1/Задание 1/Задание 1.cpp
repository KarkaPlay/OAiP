#include <stdio.h>;
#include <iostream>;

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Выражение 2*x + 3/(x-4)\n");
	printf("Введите число x\n");
	float x;
	scanf_s("%f", &x);
	if (x == 4)
		printf("Результат стремится к бесконечности");
	else {
		x = 2 * x + 3 / (x - 4);
		printf("Результат выражения - ");
		printf("%f", x);
	}
}
