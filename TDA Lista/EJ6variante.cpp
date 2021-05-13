void mezcla(pnodo lista1, pnodo lista2, pnodo &lista3)
{
	pnodo p1=lista1, p2=lista2;
	int sacado,nuevo;
	
	while (p1!=NULL && p2!=NULL)
	{
		if(p1->dato>p2->dato)
		{
			sacado=p2->dato;
			p2=p2->sig;
		}
		else
		{
			sacado=p1->dato;
			p1=p1->sig;
		}
		agregar_final(lista3,sacado);
	}	
	crear_nodo(nuevo,sacado);
	agregar_final(lista3,nuevo);
	
	while(p1!=NULL)
	{
		crear_nodo(nuevo,p1->dato);
		agregar_final(lista3,nuevo);
		p1=p1->sig;
	}	
	
	while(p2!=NULL)
	{
		crear_nodo(nuevo,p2->dato);
		agregar_final(lista3,nuevo);
		p2=p2->sig;
	}
}

