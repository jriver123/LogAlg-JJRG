#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int i, pares = 0, impares = 0;

    cout << "Ingrese 10 numeros enteros: ";
    i = 0;
    while (i < 10) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        i++;
    }

    cout << "La cantidad de numeros pares es: " << pares << endl;
    cout << "La cantidad de numeros impares es: " << impares << endl;

    return 0;
}