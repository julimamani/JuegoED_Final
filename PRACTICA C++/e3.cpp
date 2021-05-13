#include <iostream>
 
using namespace std;
 
void menu();
void submenuUno();
void submenuDos();
 
int main()
{
    char opcion;
 
    do {
        menu();
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                submenuUno();
                break;
 
            case '2':
                submenuDos();
                break;
 
            case '3':
                cout << "\n\nFIN DEL PROGRAMA" << endl;
                break;
 
            default:
                cout << "\n\nOPCION NO VALIDA" << endl;
                break;
        }
 
    }while (opcion != '3');
 
    return 0;
}
 
void menu()
{
    cout << "\n  MENU PRINCIPAL" << endl;
    cout << "==================" << endl;
    cout << "1 .- PERMUTACION" << endl;
    cout << "2 .- COMBINACION" << endl;
    cout << "3 .- Salir" << endl;
    cout << "==================" << endl;
    cout << "Elije una opcion: ";
}
 
void submenuUno()
{
    char opcion;
 
    do {
        cout << "\n  SUBMENU PERMUTACION" << endl;
        cout << "========================" << endl;
        cout << "1 .- Uno" << endl;
        cout << "2 .- Dos" << endl;
        cout << "3 .- Menu Principal" << endl;
        cout << "=======================" << endl;
        cout << "Elije una opcion: ";
 
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                cout << "\nUNO\n";
                break;
 
            case '2':
                cout << "\nDOS\n";
                break;
 
            case '3':
                break;
 
            default:
                cout << "\n\nOPCION NO VALIDA" << endl;
                break;
        }
 
    } while (opcion != '3');
}
 
void submenuDos()
{
    char opcion;
 
    do {
        cout << "\n  SUBMENU COMBINACION" << endl;
        cout << "========================" << endl;
        cout << "1 .- Uno" << endl;
        cout << "2 .- Dos" << endl;
        cout << "3 .- Menu Principal" << endl;
        cout << "=======================" << endl;
        cout << "Elije una opcion: ";
 
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                cout << "\nUNO\n";
                break;
 
            case '2':
                cout << "\nDOS\n";
                break;
 
            case '3':
                break;
 
            default:
                cout << "\n\nOPCION NO VALIDA" << endl;
                break;
        }
 
    } while (opcion != '3');
}