typedef struct tnodo *pnodo;

typedef struct tnodo
{
	char dato;
	pnodo sig;
};//pnodo lista1

void lista_minus(pnodo lista1, pnodo &lista2)
{
	pnodo sacado, nuevo;
	
	while(lista1!=NULL)
	{
		sacado=sacar_inicio(listaO);
		if(sacado->dato>='a' && sacado->dato<='z')
		{
			crear_nodo(nuevo,sacado->dato);
		}
		agregar_inicio(lista2,nuevo);
	}
}

