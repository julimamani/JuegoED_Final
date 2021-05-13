typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo izq;
	pnodo der;
}

//pnodo arbol;

void mostrarnodos2D(pnodo r)
{
	if(r==NULL)
	{
		cout<<endl;
	}
	else
	{
		if((r->izq!=NULL) && (r->der!=NULL))
		{
			cout<<r->dato<<endl;
			mostrarnodos2D(r->izq);
			mostrarnodos2D(r->der);
		}
		else
		{
			cout<<endl;
			mostrarnodos2D(r->izq);
			mostrarnodos2D(r->der);
		}
	}
}

int contvocal(pnodo r)
{
	int cont;
	if(r==NULL)
	{
		return 0;
	}
	else
	{
		if(r->dato=='A' || r->dato=='E' || r->dato=='I' || r->dato=='O' || r->dato=='U')
		{
			cont=1;
		}
		else
		{
			cont=0;
		}
		return contvocal(a->izq)+contvocal(a->der);
	}
}

