#include <stdio.h>
#include <time.h>

int main()
{
	int j = 0, arr[100000];
	int n = 100000;
	unsigned long long int K=0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n;
	}
	int i = 0;

	clock_t begin = clock();

	while (i < n - 1) { 
		while (j < n - 1 - i) { 
			if (arr[j] > arr[j + 1]) { 
				int buf = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buf;
				K++;
			}
			j++; 
		}
		j = 0; 
		i++; 
	}

	clock_t end = clock();

	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]);

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time: %f", time_spent);
	printf(" Exchanges: %d", K);
}