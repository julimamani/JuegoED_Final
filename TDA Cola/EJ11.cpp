typedef struct tnodo *pnodo;
typedef struct tnodo{
	int dato;
	pnodo sig;
};

typedef struct tbicola{
	pnodo i;
	pnodo f
};

bool bicola_llena(pnodo nuevo)
{
	return(nuevo==NULL)
}

void agregar_bicola(tbicola &bicola, pnodo nuevo, int opt) //opt 1=frente, opt 2=final
{
	if(bicola_llena(nuevo)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		if(bicola.i==NULL && bicola.f==NULL)
		{
			(bicola.i,bicola.f)=nuevo;
		}
		else
		{
			switch(opt)
			{
				case 1: nuevo->sig=bicola.i;
						bicola.i=nuevo; break;
				case 2: bicola.f->sig=nuevo;
						bicola.f=nuevo; break;
			}
		}
	}
}
