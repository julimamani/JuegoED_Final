#include<iostream>
#include<locale.h>

using namespace std;


typedef tnodo *pnodo;
typedef struct tnodo{
	int dato;
	pnodo sig;
};


void iniciar_lista (pnodo &lista);
void crear_nodo (pnodo &nuevo);
void agregar_inicio (pnodo &lista, pnodo &nuevo);
void agregar_final (pnodo &lista, pnodo &nuevo);
void agregar_en_orden (pnodo &lista, pnodo &nuevo);
pnodo quitar_inicio (pnodo &lista);
pnodo quitar_final (pnodo &lista);
pnodo quitar_buscado (pnodo &lista, int buscar);
void buscar_nodo(pnodo lista, int buscar);
void mostrar_lista(pnodo lista)

//Programa principal
int main()
{
	setlocale(LC_ALL, "spanish");
	
	pnodo lista, nuevo;
	int valor,opt;
	
	cout<<"Iniciando lista... "<<endl;
	iniciar_lista(lista);
	
	while(opt!=0)
	{
		cout<<"\nINGRESE UNA OPCIÓN"<<endl;
		cout<<"1. Crear un nodo"<<endl;
		cout<<"2. Agregar un nuevo nodo al inicio"<<endl;
		cout<<"3. Agregar un nuevo nodo al final"<<endl;
		cout<<"4. Agregar un nuevo nodo y ordenarlo"<<endl;
		cout<<""
	}
	
}

//Funciones/Procedimientos
void iniciar_lista(pnodo &lista)
{
	lista=NULL;
}

void crear_nodo(pnodo &nuevo)
{
	nuevo= new tnodo;
	if (nuevo!=NULL)
	{
		cout<<"Ingrese un valor: "; cin>>nuevo->dato;
		nuevo->sig=NULL;
	}
	else
	{
		cout<<"MEMORIA INSUFICIENTE"<<endl;
	}
}

void agregar_inicio(pnodo &lista, pnodo &nuevo)
{
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		nuevo->sig=lista;
		lista=nuevo;
	}
}

void agregar_final(pnodo &lista, pnodo &nuevo)
{
	pnodo p;
	
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		p=lista;
		while(p->sig!=NULL)
		{
			p=p->sig;
		}
		p->sig=nuevo;
	}
}

void agregar_en_orden(pnodo &lista, pnodo &nuevo)
{
	pnodo p;
	
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		if(nuevo->dato < lista->dato)
		{
			nuevo->sig=lista;
			lista=nuevo;
		}
		else
		{
			while((p->sig!=NULL) && (nuevo->dato>(p->sig)->dato))
			{
				p=p->sig;
			}
		}
	}
}

pnodo quitar_inicio(pnodo &lista)
{
	pnodo borrado;
	if(lista==NULL)
	{
		borrado=NULL;
	}
	else
	{
		borrado=lista;
		lista=lista->sig;
		borrado->sig=NULL;
	}return borrado;
}

pnodo quitar_final(pnodo &lista)
{
	pnodo borrado,p
	
	if(lista==NULL)
	{
		borrado=NULL;
	}
	else
	{
		if(lista->sig=NULL)
		{
			borrado=lista;
			lista=NULL;
		}
		else
		{
			p=lista;
			while((p->sig)->sig!=NULL)
			{
				p=p->sig;
			}
			borrado=p->sig;
			p->sig=NULL;
		}
	}
	return borrado;
}

pnodo quitar_buscado(pnodo &lista, int buscar)
{
	pnodo borrado, i;
	
	if(lista==NULL)
	{
		borrado=NULL;
	}
	else
	{
		if(lista->dato==buscar)
		{
			borrado=lista;
			lista=borrado->sig;
			borrado->sig=NULL;
		}
		else
		{
			while(i=lista;i->sig!=NULL && valor!=(i->sig)->dato;i=i->sig)
			{
				if(i->sig!NULL)
				{
					borrado=i->sig;
					i->sig=borrado->sig;
					borrado->sig=NULL;
				}
				else
				{
					borrado=NULL;
				}
			}
		}
	}
	return borrado;
}

void buscar_nodo(pnodo lista, int buscar)
{
	bool band=false;
	pnodo p=lista;
	
	while(p!=NULL && band==false)
	{
		if(buscado==p->dato)
		{
			band=true;
			p=->sig;
		}
	}
	return band;
}

void mostrar_lista(pnodo lista)
{
	pnodo p;
	if(lista==NULL)
	{
		cout<<"La lista está vacía"<<endl;
	}
	else
	{
		p=lista;
		while(p!=NULL)
		{
			cout<<p->dato<<endl;
			p=p->sig;
		}
	}
}


