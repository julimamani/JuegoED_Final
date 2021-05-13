typedef struct tnodo *pnodo;

typedef struct tnodo
{
	int dato;
	pnodo sig;
}

void agregar_bicola(pnodo &bicola, pnodo nuevo)
{
	pnodo p=bicola;
	if(bicola_llena(nuevo)==true)
	{
		cout<<"Bicola llena"<<endl;
	}
	else
	{
		if(bicola==NULL)
		{
			bicola=nuevo;
		}
			else
		{
			while(p->sig!=NULL)
			{
				p=p->sig
			}
			p->sig=nuevo;
		}
	}
}

void sacar_bicola(pnodo &bicola, int opt)
{
	pnodo sacado;
	if(bicola_vacia(bicola)==true)
	{
		sacado=NULL;
	}
	else
	{
		p=bicola;
		if(p->sig==NULL)
		{
			sacado=bicola;
			bicola=NULL;
		}
		else
		{
			switch(opt)
			{
				case 1: sacado=bicola;
						bicola=sacado->sig;
						sacado->sig=NULL;
						break;
				case 2: while((p->sig)->sig!=NULL)
						{p=p->sig}
						sacado=p->sig;
						p->sig=NULL;
						break;
			}
		}
	}
	return sacado;
}
