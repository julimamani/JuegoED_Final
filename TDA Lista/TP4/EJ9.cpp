/*const int MAX=118;

typedef tquimik telementos[MAX]*/

typedef struct tquimik{
	string nombre;
	string simbolo;
	int prot;
	int elect;
	int neut;
	string
};

typedef struct tnodo *pnodo

typedef struct tnodo{
	tatributo dato;
	pnodo sig;	
};

pnodo elementos;

void crear_elemento(pnodo &nuevo)
{
	nuevo= new tnodo;
	
	if(nuevo!=NULL)
	{
		cout<<"NOMBRE DEL ELEMENTO: ";cin>>nuevo->dato.nombre;
		cout<<"SÍMBOLO: "; cin>>nuevo->dato.simbolo;
		...
	}
	else
	{
		cout<<"Memoria insuficiente"<<endl;
	}
}

void mostrar_tabla (pnodo elementos)
{
	pnodo p;
	if(elementos==NULL)
	{
		cout<<"Tabla vacía"<<endl;
	}
	else
	{
		p=elementos;
		while(p!=NULL)
		{
			cout<<"NOMBRE DEL ELEMENTO: "<<p->dato.nombre;
			...
		}
	}
}
