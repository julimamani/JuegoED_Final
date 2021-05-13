typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo sig;
};

//"pnodo pila;" en la función principal

void iniciar_pila(pnodo &pila)
{
	pila=NULL;
}

void agregar_pila(pnodo &pila, pnodo nuevo)
{
	if(pila_llena(nuevo)==true)
	{
		cout<<"Pila Llena"<<endl;
	}
	else
	{
		if(pila==NULL)
		{
			pila=nuevo;
		}
		else
		{
			nuevo->sig=pila;
			pila=nuevo;
		}
	}
}

pnodo sacar_pila(pnodo &pila)
{
	pnodo sacado;
	
	if(pila_vacia(pila)==true)
	{
		sacado=NULL;
	}
	else
	{
		sacado=pila;
		
		if(pila->sig==NULL)
		{
			pila=NULL;
		}
		else
		{
			pila=pila->sig; //me la chupan los libros
			sacado->sig=NULL;
		}
	}
	return sacado;
}

pnodo tope_pila(pnodo pila)
{
	return pila;
}

