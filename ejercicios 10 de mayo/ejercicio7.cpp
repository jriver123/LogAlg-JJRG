#include<iostream>

using namespace std;

void ordenamientoBurbuja(int arr[], int n) {
    int i, j, temp;

    while (n > 1) {
        i = 0;
        while (i < n - 1) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            i++;
        }
        n--;
    }
}

int main() {
    int arr[5];
    int i;

    cout << "Ingrese 5 numeros enteros: ";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    ordenamientoBurbuja(arr, 5);

    cout << "Los numeros ordenados en forma ascendente son: ";
    for (i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}