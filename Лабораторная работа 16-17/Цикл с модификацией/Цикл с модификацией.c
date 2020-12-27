#include <stdio.h>
void qsort(int* arr, int b, int e) {
    if (b < e) {
        int buf, l = b, r = e, piv = arr[(b + e) / 2];  // объявляем необходимые переменные и выбираем опорный элемент
        for (; l <= r;) {
            while (arr[l] < piv) // Движемся от начала массива по возрастающей
                l++;
            while (arr[r] > piv) // Движемся от конца массива по убывающей
                r--;
            if (l <= r) { // Меняем элементы справа и слева от опорного
                int t = arr[l];
                arr[l] = arr[r];
                arr[r] = t;
                l++;
                r--;
            }
        }
        qsort(arr, b, r);  // Та же сортировка в правом подмассиве
        qsort(arr, l, e);  // И в левом
    }
}

int main()
{
    int arr[] = { 5, 7, 8, 4, 9, 1, 3, 6, 2 };  // объявление массива
    int N = sizeof(arr) / sizeof(int); // длина массива

    qsort(arr, 0, N - 1);  // сортировка

    for (int i = 0; i < N; i++)  // вывод упорядоченного массива
        printf("%d ", arr[i]);
}