#include<string.h>

typedef struct tnodo *pnodo;

typedef struct tspecs
{
	string cpu;
	string ram;
	string disco;	
};

typedef struct tuser
{
	string nombre;
	string cargo;
};

typedef struct tpc
{
	int codigo;
	string marca;
	string modelo;
	tspecs specs;
	tuser usuario
};

typedef struct tnodo
{
	tpc dato;
	pnodo sig;
};

typedef struct tlista;
{
	pnodo i;
	pnodo f;
};

void listarxmarca (tlista lista, string marcabusq)
{
	pnodo p=lista.i;
	int cont=0;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->dato.marca == marcabusq)
			{
				cout<<p->dato.codigo<<endl;
				cout<<p->dato.specs.cpu<<endl;
				cout<<p->dato.specs.disco<<endl;
				cout<<p->dato.specs.ram<<endl;
				cout<<p->dato.usuario.nombre<<endl;
				cont++;
			}
			p=p->sig;
		}
		cout<<"Hay "<<cont<<" computadoras"<<endl;
	}
}

void crear_nodo(pnodo &nuevo)
{
	nuevo= new tnodo;
	if (nuevo!=NULL)
	{
		cout<<"CÓDIGO: "; cin>>nuevo->dato.codigo;
		cout<<"MARCA: "; cin>>nuevo->dato.marca;
		cout<<"MODELO: "; cin>>nuevo->dato.modelo;
		cout<<"PROCESADOR: "; cin>>nuevo->dato.specs.cpu;
		cout<<"MEMORIA RAM: "; cin>>nuevo->dato.specs.ram;
		cout<<"DISCO: "; cin>>nuevo->dato.specs.disco;
		cout<<"USUARIO: "; cin>>nuevo->dato.usuario.nombre;
		cout<<"CARGO: "; cin>>nuevo->dato.usuario.cargos;
		nuevo->sig=NULL;
	}
	else
	{
		cout<<"MEMORIA INSUFICIENTE"<<endl;
	}
}

void agregar_final(tlista &lista, pnodo nuevo)
{
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		lista.f->sig=nuevo;
		lista.f=nuevo;
	}
}

cout<<"extremojohnson@quam.com"


