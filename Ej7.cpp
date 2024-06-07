//Escriba un programa que imprima la transpuesta de una matriz
#include <stdio.h>
using namespace std;
int main ()
{
       //Declaracion e inicializacion de la matriz
const int max_f=5;
const int max_c=5;
void transponerMatriz(int matriz[max_f][max_c], int filas, int columnas) {
    int transpuesta[max_f][max_c];
int i,j;
int mat[5][3];
(int matriz[max_f][max_c], int filas, int columnas)
printf("\n matriz:"i,j);
//Transpuesta
{
for (int i=0 i<columnas;i++);
for (int j=0 j<filas;j++);
transpuesta [i][j] =matriz [i][j]
}
//Imprimir transpuesta
cout<<"La transpuesta de la matriz es"<<end1;
for (int i=0 i<columnas;i++);{
for(int j=0 j<filas;j++){
    cout<<transpuesta[i][j]
}
cout<<end1
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



    return 0;
}