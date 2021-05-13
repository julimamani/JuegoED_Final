typedef struct tnodo *pnodo;

typedef struct tnodo
{
	char dato;
	pnodo sig;
};

void seleccionANDmostrar(pnodo &lista)
{
	pnodo p, q;
	char aux;
	
	for(p=lista; p->sig!=NULL; p=p->sig)
	{
		for(q=p->sig; q->sig!=NULL; q=q->sig)
		{
			if(p->dato>q->dato)
			{
				aux=p->dato;
				p->dato=q->dato;
				q->dato=aux;
			}
		}
	}
	
	while(p!=NULL)
	{
		cout<<p->dato<<endl;
		p=p->sig;
	}
}

