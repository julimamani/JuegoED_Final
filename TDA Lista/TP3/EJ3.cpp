typedef struct tnodo *pnodo;
typedef struct tnodo
{
	int dato;
	pnodo sig;
	pnodo ant;
};

//pnodo lista en int main()

void quitar_min(pnodo &lista)
{
	pnodo p=lista->sig,min=lista;
	
	if(lista==NULL)
	{
		cout<<"lista vacia"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->dato<min->dato)
			{
				min=p;
			}
			p=p->sig;
		}
		if(min->ant=NULL)
		{
			sacar_inicio(lista);
		}
		else
		{
			if(min->sig=NULL)
			{
				sacar_final(listas);
			}
			else
			{
				(min->ant)->sig=min->sig;
				(min->sig)->ant=min->ant;
				min->sig=NULL;
				min->ant=NULL;	
			}
		}
	}
}

void may_promed(pnodo lista)
{
	int cont=0,suma=0;
	pnodo p=lista;
	float promed;
	if(lista==NULL)
	{
		cout<<"lista vacia"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			suma=suma+p->dato;
			cont++;
			p=p->sig;			
		}
		prom=float(suma)/cont;
		p=lista;
		while(p!=NULL)
		{
			if(p->dato>prom)
			{
				cout<<p->dato<<endl;
				p=p->sig;
			}
		}
	}
}
	
