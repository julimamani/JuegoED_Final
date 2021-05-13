int sumar_nodos (pnodo lista)
{
	if(lista==NULL)
	{
		return 0;
	}
	else
	{
		return (lista->dato+sumar_nodos(lista->sig));
	}
}

void agregar_final(pnodo &lista, pnodo nuevo)
{
	if (lista->sig==NULL)
	{
		lista->sig=nuevo;
	}	
	else
	{
		agregar_final(lista->sig, nuevo)
	}
}

void mostrar_lista (pnodo lista)
{
	if(lista==NULL)
	{
		cout<<endl;
	}
	else
	{
		mostrar_lista(lista->sig);
		cout<<lista->dato<<endl;
	}
}



