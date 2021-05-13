#include<iostream>
#include<locale.h>

using namespace std;

typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato;
	pnodo sig;
};

void agregar (pnodo &lista, pnodo nuevo, int opt);
void reemplazo (pnodo &lista);
int fact (int a);

int main()
{
	setlocale (LC_ALL, "spanish");
	
	pnodo lista, nuevo;
	int opcion;
	
	while(opcion!=3)
	{
		cout<<"Ingrese un valor: ";
		cin>>nuevo->dato;
		cout<<"1. Agregarlo al inicio"<<endl;
		cout<<"2. Agregarlo al final"<<endl;
		cout<<"3. Reemplazar los valores por sus respectivos factoriales"<<endl;
		cin>>opcion;
		agregar (lista, nuevo, opcion);
	}
	
	
}

void agregar(pnodo &lista, pnodo nuevo, int opt)
{
	pnodo p;
	
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		switch(opt)
		{
			case 1: nuevo->sig=lista;
					lista=nuevo;
					break;
			case 2: p=lista;
					while(p->sig!=NULL)
					{
						p=p->sig;
					}
					p->sig=nuevo;
					break;
			default: cout<<"."<<endl; break;
		}
	}
}

void reemplazo(pnodo &lista)
{
	pnodo p;
	
	if(lista==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		p=lista;
		while(p!=NULL)
		{
			if(p->dato>0)
			{
				p->dato=fact(p->dato);
			}
			p=p->sig;
		}
	}
}

int fact(int a)
{
	if (a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}

