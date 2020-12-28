#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, min, buf;
    int array[100000], N = 100000;
    unsigned long long int K = 0;

    for (int i = 0; i < N; i++) {
        array[i] = rand() % N;
    }

    clock_t begin = clock();

    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1, min = i; j < N; j++)
            if (array[j] < array[min])
                min = j;

        buf = array[i];
        array[i] = array[min];
        array[min] = buf;
        K++;
    }

    clock_t end = clock();

    for (i = 0; i < N; i++)
        printf("%d ", array[i]);

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time: %f", time_spent);
    printf("Exchanges: %d ", K);
}