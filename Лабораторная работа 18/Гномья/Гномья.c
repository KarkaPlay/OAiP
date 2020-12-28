#include <stdio.h>
#include <time.h>

int main()
{
	int i = 1, j = 2, buf;
	int arr[100000], n = 100000;
	unsigned long long int K = 0;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n;
	}

	clock_t begin = clock();

	for (i = 1; i < n;)
	{
		if (arr[i - 1] > arr[i]) {
			buf = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = buf;
			K++;
			i--;
			if (i > 0) continue;
		}
		i = j++;
	}

	clock_t end = clock();

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time: %f", time_spent);
	printf("Exchanges: %d ", K);
}