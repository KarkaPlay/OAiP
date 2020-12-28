#include <stdio.h>
#include <time.h>

unsigned long long int K = 0;

void qsort(int* arr, int b, int e) {
    if (b < e) {
        int buf, l = b, r = e, piv = arr[(b + e) / 2];
        while (l <= r) {
            while (arr[l] < piv)
                l++;
            while (arr[r] > piv)
                r--;
            if (l <= r) {
                int t = arr[l];
                arr[l] = arr[r];
                arr[r] = t;
                K++;
                l++;
                r--;
            }
        }
        qsort(arr, b, r);
        qsort(arr, l, e);
    }
}

int main()
{
    int arr[100000], n=100000;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    clock_t begin = clock();

    qsort(arr, 0, n - 1);

    clock_t end = clock();

    for (int i = 0; i < n; i+=10)
        printf("%d ", arr[i]);

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time: %f", time_spent);
    printf("Exchanges: %d ", K);
}