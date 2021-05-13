const int MAX=4;

typedef int tcontenedor[MAX];

typedef int tcola[MAX]

void iniciar_cola(tcola &datos1, tcola &datos2, tcola &datos3)
{
	datos3[0]=0;
	datos3[1]=0;
}

void cargar_cola(tcola &datos1, tcola &datos2, tcola &datos3, int nuevo)
{
	if(cola_llena(cola)=true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		datos3[1]=sig(datos3[1]);
		if(datos3[1]<MAX)
		{
			datos1[datos3[1]]=nuevo;
		}
		else
		{
			if(datos3[1]<2*MAX)
			{
				datos2[datos3[1]-MAX]=nuevo;
			}
			else
			{
				datos3[(datos3-2*MAX)+2]=nuevo;
			}
		}
	}
}

bool cola_llena(tcola cola)
{
	return (sig(datos3[1])==datos3[0]);
}

bool cola_vacia(tcola cola)
{
	return (datos3[0]==datos3[1]);
}

int sacar_cola(tcola &cola)
{
	int sacado;
	if (cola_vacia(cola)==true)
	{
		sacado=-777;
	}
	else
	{
		datos3[0]=sig(datos3[0]);
		if(cola.frente<MAX)
		{
			sacado=datos1[datos3[0]];
		}
		else
		{
			if(datos3[0]<2*MAX)
			{
				sacado=datos2[datos3[0]-MAX];
			}
			else
			{
				sacado=datos3[(datos3[0]-2*MAX)+2];
			}
		}
	}
	return sacado;
}

int consultar_frente(tcola cola)
{
	int consultado
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		datos3[0]=sig(datos[0]);
		if(cola.frente<MAX)
		{
			consultado=datos1[datos3[0]];
		}
		else
		{
			if(datos3[0]<2*MAX)
			{
				consultado=datos2[datos3[0]-MAX];
			}
			else
			{
				consultado=datos3[(datos3[0]-2*MAX)+2];
			}
		}
	}
	return consultado;
}

int consultar_final(tcola cola)
{
	int consultado
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		if(datos3[1]<MAX)
		{
			consultado=datos1[datos3[1]];
		}
		else
		{
			if(datos3[1]<2*MAX)
			{
				consultado=datos2[datos3[1]-MAX];
			}
			else
			{
				consultado=datos3[(datos3[1]-2*MAX)];
			}
		}
	}
	return consultado;
}
