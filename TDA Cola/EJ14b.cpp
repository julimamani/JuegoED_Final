typedef struct tnodo *pnodo;

typedef struct tnodo
{
	int dato;
	pnodo sig;
}

typedef struct tbicola{
	pnodo i;
	pnodo f;
};

void iniciar_bicola(tbicola &bicola)
{
	bicola.i=NULL;
	bicola.f=NULL;
}

pnodo consultar_frente(tbciola &bicola)
{
	return bicola.i;
}

pnodo consultar_final(tbicola &bicola)
{
	return bicola.f;
}

void agregar_bicola(pnodo &bicola, pnodo nuevo)
{
	if(bicola_llena(nuevo)==true)
	{
		cout<<"Bicola llena"<<endl;
	}
	else
	{
		if(bicola.i==NULL && bicola.f==NULL)
		{
			bicola.i=nuevo;
			bicola.f=nuevo;
		}
		else
		{
			bicola.f->sig=nuevo;
			bicola.f=nuevo;
		}
	}
}

pnodo quitar_bicola(tbicola &bicola, int opt)
{
	pnodo p,sacado;
	if(bicola_vacia(bicola)==true)
	{
		sacado=NULL;
	}
	else
	{
		p=bicola.i;
		if(p->sig=NULL)
		{
			sacado=bicola.i;
			bicola.i=NULL;
			bicola.f=NULL;
		}
		else
		{
			switch(opt)
			{
				case 1://para despues
			}
		}
	}
}

bool bicola_llena(pnodo nuevo)
{
	return (nuevo==NULL);
}

bool bicola_vacia(tbicola bicola)
{
	bicola.i=NULL;
	bicola.f=NULL;
}


