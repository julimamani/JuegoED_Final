void mezcla(pnodo lista1, pnodo lista2, pnodo &lista3)
{
	pnodo sacado;
	
	while (lista1!=NULL && lista2!=NULL)
	{
		if(lista1->dato>lista2->dato)
		{
			sacado=quitar_inicio(lista2);
		}
		else
		{
			sacado=quitar_inicio(lista1);
		}
		agregar_final(lista3,sacado);
	}	
	
	while(lista1!=NULL)
	{
		sacado=quitar_inicio(lista1);
		agregar_final(lista3,sacado);
	}
	
	while(lista2!=NULL)
	{
		sacado=quitar_inicio(lista2);
		agregar_final(lista3,sacado);
	}
}
