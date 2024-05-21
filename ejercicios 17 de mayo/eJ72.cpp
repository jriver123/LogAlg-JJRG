#include <iostream>
using namespace std;

const int MAX_FILAS = 100;
const int MAX_COLUMNAS = 100;

void transponerMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    int transpuesta[MAX_COLUMNAS][MAX_FILAS];

    // Calcula la transpuesta
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    // Imprime la transpuesta
    cout << "La transpuesta de la matriz es:" << endl;
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[MAX_FILAS][MAX_COLUMNAS];
    int filas, columnas;

    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    transponerMatriz(matriz, filas, columnas);

    return 0;
}
