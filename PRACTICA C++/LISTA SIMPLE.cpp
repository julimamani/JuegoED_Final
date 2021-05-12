	#include <iostream>

using namespace std;

//genero mi lista

	typedef struct tnodo *pnodo;
	
	typedef struct tnodo{
		
		int dato;
		pnodo sig;
		
	};
	
	
	
	void inicia_lista(pnodo &lista){
		
		lista=NULL;
		
	}
	
	
	void agregar_inicio(pnodo &lista,pnodo nuevo){
	 
	 	nuevo->sig=lista;
		lista=nuevo;
		
	}
	
	
	void crear(pnodo &nuevo)
{
	nuevo=new tnodo;

	if (nuevo!=NULL){
		 cout << "Ingrese valor: ";
		cin >> nuevo->dato;
		nuevo->sig=NULL;
	}
	else
		cout << "MEMORIA INSUFICIENTE" << endl;
	}
	
	
	void agregar_final(pnodo &lista,pnodo nuevo){
	pnodo i;
	
	if (lista==NULL){
	
		lista=nuevo;
	
	}
	
	else{
		
 	for(i=lista;i->sig!=NULL;i=i->sig);
 	
		i->sig=nuevo;
	}
	}
	

