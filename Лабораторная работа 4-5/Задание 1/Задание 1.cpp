#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* N = new int[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
        cin >> N[i];
    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (N[j] > N[j + 1])
            {
                int buf = N[j];
                N[j] = N[j + 1];
                N[j + 1] = buf;
            }

    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}