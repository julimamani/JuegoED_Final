int cant_nodos(pnodo a)
{
	if (a==NULL)
	{
		return 0;
	}
	else
	{
		return cant_nodos(a->izq)+cant_nodos(a->der)+1
	}
}

int cant_hojas(pnodo a)
{
	if(a==NULL)
	{
		return 0;	
	}
	else
	{
		if(a->izq==NULL && a->der==NULL)
		{
			return 1;
		}
		else
		{
			return cant_hojas(a->izq)+cant_hojas(a->der);
		}
	}
}


