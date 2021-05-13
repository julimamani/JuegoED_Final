typedef struct tnodo *pnodo;

typedef struct tnodo
{
	int dato;
	pnodo izq;
	pnodo der;
}

void DIR(pnodo r)
{
	if(a!=NULL)
	{
		DIR(a->der);
		DIR(a->izq);
		cout<<r->dato;
	}
}

int impares(pnodo r)
{
	if(r==NULL)
	{
		return 0;
	}
	else
	{
		if(r->dato % 2 != 0)
		{
			return impares(r->izq)+impares(r->der)+1;
		}
		else
		{
			return impares(r->izq)+impares(r->der);
		}
	}	
}

bool pares(pnodo r)
{
	if(r==NULL)
	{
		return false;
	}
	else
	{
		if(r->dato % 2 == 0)
		{
			return true;
		}
		else
		{
			return pares(r->izq)||pares(r->der);
		}
	}	
}
