typedef struct tnodo *pnodo;

typedef struct tnodo
{
	char dato;
	pnodo sig;
};

typedef struct tlista
{
	pnodo i;
	pnodo f;
	int may;
	int min;
};

void agregar_inicio(tlista &lista, pnodo nuevo)
{
	//EVALUANDO SI EL DATO INGRESADO ES MAYUS O MINUS
	if(nuevo->dato >='a' && nuevo->dato <= 'z')
	{
		lista.min++;
	}
	else
	{
		if(nuevo->dato >='A' && nuevo->dato <= 'Z')
		{
			lista.may++;
		}
	}
	
	//AGREGANDO AL INICIO
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		nuevo->sig=lista.i;
		lista.i=nuevo;
	}
}

void sacar_final(tlista &lista)
{
	pnodo p=lista.i, sacado;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		sacado=NULL;
	}
	else
	{
		
		if(lista.f->dato >= 'a' && lista.f->dato <= 'z')
		{
			lista.min--;
		}
		else
		{
			if(lista.f->dato >= 'A' && lista.f->dato <= 'Z')
			{
				lista.may--;
			}
		}
		
		sacado=lista.f;
		if(lista.i==lista.f)
		{
			lista.i=NULL;
			lista.f=NULL;
		}
		else
		{
			while((p->sig)->sig!=NULL)
			{
				p=p->sig;
			}			
			lista.f
			p->sig=NULL;
		}
	}
	return sacado;
}

void mostrar_lista(tlista lista)
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
		cout<<"Hay "lista.may<<" mayúsculas"<<endl;
		cout<<"Hay "lista.min<<" minúsculas"<<endl;
	}
}
