/* Dada la siguiente lista simple circular:

				 I              F
				|b|->|q|->|f|->|h|--
				^__________________|
				
A) Defina las estructuras correspondientes e incluya un elemento la cantidad de datos de la lista.
B) Desarrolle la operación "agregar_final_norep" que permita agregar, agregar al final de la lista un nuevo
   siempre y cuando no exista el valor ya almacenado. La operación debe mantener la lista circular.*/
   
typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo sig;	
};

typedef struct tlista{
	pnodo i;
	pnodo f;
	int cont;
};

void agregar_final_norep(tlista &lista, pnodo nuevo)
{
	pnodo p=lista.i;
	bool repetido=false;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		(lista.i,lista.f)=nuevo;
		nuevo->sig=lista.i
		lista.cont++;
	}
	else
	{
		if(nuevo->dato=lista.f->dato)
		{
			repetido=true;
		}
		else
		{
			while(p->sig!=lista.i && repetido==FALSE)
			{
				if(p->dato==nuevo->dato)
				{
					repetido=true;
				}
			}
			if(repetido==false)
			{
				lista.f->sig=nuevo;
				nuevo->sig=lista.i;
				lista.f=nuevo;
				lista.cont++;
			}
			else
			{
				cout<<"El dato ya existe"<<endl;
				delete(nuevo);
			}
		}
	}	
}
