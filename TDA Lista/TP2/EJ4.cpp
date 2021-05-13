typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato;
	pnodo sig;	
};

typedef struct tlista{
	pnodo i;
	pnodo f;
};

void square(tlista &lista)
{
	pnodo p;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->dato > 0 && p->dato % 2 == 0)
			{
				p->dato=sqr(p->dato);
			}
			p=p->sig;
		}
	}
}

int sqr(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return 2*a-1+sqr(a-1);
	}
}
