#include <stdio.h>
#include <time.h>
int main()
{
	int i, j, x, d;
	int array[100000], n = 100000;
	unsigned long long int K = 0;

	for (int i = 0; i < n; i++) {
		array[i] = rand() % n;
	}

	clock_t begin = clock();

	for (d = n / 2; d > 0; d /= 2)
		for (i = d; i < n; i++)
		{
			x = array[i];
			for (j = i; j >= d; j -= d)
				if (x < array[j - d]) {
					array[j] = array[j - d];
					K++;
				}
				else
					break;
			array[j] = x;
		}

	clock_t end = clock();

	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}

	double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;

	printf("Time: %f", time_spent);
	printf("Exchanges: %d ", K);
}