#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, x;
    int array[] = { 5, 0, 2, 4, 1, 3 };
    int n = sizeof(array) / sizeof(int); // Объявление массива и необходимых переменных

    for (i = 1; i < n; i++) // Начинаем со 2-го элемента массива
    {  
        x = array[i];
        j = i;
        while (j > 0 && x < array[j-1])  // Пока текущий элемент меньше предыдущего и его индекс не равен 0
        {  
            array[j] = array[j-1];  // Перемещаем его влево
            j--;
        }
        array[j] = x;
    }

    for (i = 0; i < n; i++) // Вывод упорядоченного массива
    {
        printf("%d ", array[i]);
    }
}