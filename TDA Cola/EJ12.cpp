typedef struct tnodo *pnodo;
typedef struct tnodo{
	int dato;
	pnodo sig;
};
typedef struct tbicola{
	pnodo i;
	pnodo b;
	int cont;
};

int sig(int a)
{
	if(a==MAX-1)
	{
		return 0;
	}
	else
	{
		return a=a+1;
	}
}

pnodo quitar_bicola(tbicola &bicola, int opt)
{
	pnodo sacado, p=bicola.i;
	
	if(bicola.cont==0)
	{
		sacado=-999;
	}
	else
	{
		if(bicola.cont==1)
		{
			sacado=bicola.i;
			bicola.i=NULL;
			bicola.f=NULL;
			bicola.cont--;
		}
		else
		{
			bicola.cont--;
			switch(opt)
			{
				case 1: sacado=bicola.i;
						bicola.i=sacado->sig;
						sacado->sig=NULL; break;
				case 2: while((p->sig)->sig!=NULL)
						{
							p=p->sig;
						}
						sacado=p->sig;
						bicola.f=p;
						p->sig=NULL;break;
			}
		}
	}
	return sacado;
}
