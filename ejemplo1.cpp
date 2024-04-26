#include <iostream>

/*uso de switch - recursividad*/

using namespace std;

/*constante*/
#define MAX 1000

/*variables global*/
int nums [MAX];
int pos = 0; //posicion del elemento en el arreglo
int suma = 0;

void agregarNum(int num){
if (pos<MAX){
nums[pos]=num;
pos++;
}else{
    cout<<"No se puede agregar el numero\n";
}
}

int sumar(int suma, int ultElem){
    if(ultElem==-1){
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(suma, ultElem -1);
}

void menu()
{
    int suma = 0;
    int op, num;
    cout<< "1. Agregar elemento. "<<endl;
    cout<< "2. Sumar. "<<endl;
    cout<< "3. Mostrar. "<<endl;
    cout<< "4. Salir. "<<endl;
    cin >> op;

    switch (op)
    {
    case 1:
    cout << "Dime un numero: ";
    cin >> num;
    agregarNum(num);
        break;
    case 2:
        cout << "La suma es: " << sumar(suma, pos - 1) << endl;
        break;
    case 4:
    break;
    default:
        cout << "No existe la opcion...\n";
        break;
    }
    menu();
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
