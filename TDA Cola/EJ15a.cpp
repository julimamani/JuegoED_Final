typedef struct tnodo *pnodo;

typedef struct tnodo{
	float dato;
	pnodo sig;
	pnodo ant;		
};

typedef struct tbicola{
	pnodo i;
	pnodo f;
};

void agregar_bicola(tbicola &bicola, pnodo nuevo)
{
	pnodo p=bicola.i;
	if(bicola_llena(nuevo)==true)
	{
		cout<<"Bicola llena"<<endl;
	}
	else
	{
		bicola.f->sig=nuevo;
		nuevo->ant=bicola.f;
		bicola.f=nuevo;
	}
}

pnodo sacar_bicola(tbicola &bicola, int opt)
{
	pnodo sacado;
	
	if(cola_vacia(cola)==true)
	{
		sacado=-999;
	}
	else
	{
		if(cola.i==cola.f)
		{
			sacado=cola.i;
			cola.i=NULL;
			cola.f=NULL;
		}
		else
		{
			switch(opt)
			{
				case 1: sacado=cola.i;
						cola.i->sig=cola.i
						cola.i->ant=NULL;
						sacado->sig=NULL;
						break;
				case 2: sacado=cola.f;
						cola.f->ant=cola.f;
						cola.f->sig=NULL;
						sacado->ant=NULL;
			}
		}
	}
}


