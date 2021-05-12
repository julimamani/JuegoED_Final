#include <iostream>

#include <stdlib.h>

using namespace std;

typedef int *p_entero;

main()
{ 	int dato;
	p_entero p,q;
	cout << "Ingrese un dato:";
	cin >> dato;
	cout << "Valor ingresado: " << dato << endl;
	p=&dato;
	cout << endl << "Valor del puntero p: " << p << endl;
	cout << "Valor apuntado por el puntero p: " << *p << endl;
	q=p;
	cout << endl << "Valor del puntero q: " << q << endl;
	cout << "Valor apuntado por el puntero q:" << *q << endl;
	system("pause");
}
