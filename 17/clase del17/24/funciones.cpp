#include <iostream>
#include "variables.h"

using namespace std;

void start();
void menu();
void addAge();

/*prototipo funciones*/
void menu()
{
    system("cls||clear");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mosreae edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

void addAge()
{
    system("cls||clear");
    cout << "Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}
/*funciones*/

void start()
{
    int option = 0;

    while (option != 6)
    {
        menu();
        cout << "Dime una opcion: ";
        cin >> option;
        switch (option)
        {
        case 1:
            addAge();
            break;
        case 6:
            cout << "Adios" << endl;
            break;
        default:
            break;
        }
    }
}
