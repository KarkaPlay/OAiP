#include <stdio.h>

void qsort(int* arr, int b, int e) {
    int piv = arr[(b + e) / 2];
    int l = b;
    int r = e;
    while (l <= r)
    {
        while (arr[l] < piv) l++;
        while (arr[r] > piv) r--;
        if (l <= r) // условие 
        {
            int t = arr[l];
            arr[l] = arr[r];
            arr[r] = t;
            l++;
            r--;
        }
    }
}

int main()
{
    int b, e, l, r, t, arr[] = { 5, 7, 8, 4, 9 };
    b = 0; e = 3;
    if (b < r) {
        qsort(arr, b, r);
    }
    if (l < e)
    {
        qsort(arr, l, e);
    }

    for (int i = 0; i < 5; i++)  // Вывод упорядоченного массива
        printf("%d ", arr[i]);
}