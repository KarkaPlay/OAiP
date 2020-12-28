#include <stdio.h>
#include <time.h>

int main()
{
    int j = 0, arr[100000];
    int n = 100000;
    long int K = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
    float k = 1.247;
    int step = n - 1;

    clock_t begin = clock();

    for (int step = n - 1; step >= 1; step /= k)
        for (int i = 0; i < n - step; i++)
            if (arr[i] > arr[i + step])
            {
                int temp = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = temp;
                K++;
            }

    clock_t end = clock();

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time: %f", time_spent);
    printf("Exchanges: %d ", K);
}