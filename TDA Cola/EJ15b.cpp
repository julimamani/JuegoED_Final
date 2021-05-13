typedef struct tnodo *pnodo;

typedef struct tnodo{
	int char;
	pnodo sig;
	pnodo ant;
};

typedef struct tbicola{
	pnodo i;
	pnodo f;
	int cont;
};

void iniciar_bicola(tbicola &bicola)
{
	bicola.i=NULL;
	bicola.f=NULL;
	cont=0;
}

bool bicola_vacia(tbicola bicola)
{
	return cont==0;
}

bool bicola_llena(pnodo nuevo)
{
	return (nuevo==NULL);
}

pnodo consultar_frente(tbciola &bicola)
{
	return bicola.i;
}

pnodo consultar_final(tbicola &bicola)
{
	return bicola.f;
}

void agregar_bicola(tbicola &bicola, pnodo nuevo, int opt)
{
	if(bicola_llena(nuevo)==true)
	{
		cout<<"BICOLA LLENA"<<endl;
	}
	else
	{
		if(bicola.cont==0)
		{
			bicola.i=nuevo;
			bicola.f=nuevo;	cont++;
		}
		else
		{
			switch(opt)
			{
				case 1: nuevo->sig=bicola.i;
						bicola.i->ant=nuevo;
						bicola.i=nuevo; cont++;
						break;
				case 2: bicola.f->sig=nuevo;
						nuevo->ant=bicola.f;
						bicola.f=nuevo; cont++;
						break;
			}
		}
	}	
}

pnodo quitar_bicola(tbicola &bicola)
{
	pnodo sacado;
	
	if(bicola.cont==0)
	{
		return sacado;
	}
	else
	{
		sacado=bicola.i;
		if(bicola.cont==1)
		{
			bicola.i=NULL;
			bicola.f=NULL;
		}
		else
		{
			bicola.i=sacado->sig;
			sacado->sig=NULL;
			bicola.i->ant=NULL;
		}
		bicola.cont--;
	}
	return sacado;
}
