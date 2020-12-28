#include <stdio.h>
#include <time.h>
int main()
{
    int i, j, x;
    int array[100000], n=100000;
    unsigned long long int K = 0;

    for (int i = 0; i < n; i++) {
        array[i] = rand() % n;
    }

    clock_t begin = clock();

    for (i = 1; i < n; i++)
    {
        for (j = i, x = array[i]; (j > 0) && (array[j - 1] > x); j--){
            array[j] = array[j - 1];
            K++;
        }
        array[j] = x;
    }

    clock_t end = clock();

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time: %f", time_spent);
    printf("Exchanges: %d ", K);
}