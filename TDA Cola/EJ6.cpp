const int MAX=30;

typedef char tcontenedor[MAX];

typedef struct tcolas{
	tcontenedor datos;
	int fr1,fr2,fin1,fin2,cont;
};

//tcola colas;

//cola 1: procesamiento
//cola 2: almacenamiento

void iniciar_colas(tcola &colas)
{
	colas.fr1=(MAX/2)-1;
	colas.fin1=(MAX/2)-1;
	colas.fr2=MAX-1;
	colas.fin2=MAX-1;
	cont=0;
}

int sig(int a, /*int opt*/)
{
	if(a==14)
	{
		return 0;
	}
	else
	{	
		if(a==29)
		{
			return 15;
		}
		else
		{
			a++;
		}
	}
}

bool cola_vacia(tcola colas, int opt)
{
	switch(opt)
	{
		case 1: return colas.fr1==colas.fin1; break;
		case 2: return cont==0; break;
	}
}

bool cola_llena (tcola colas, int opt)
{
	switch(opt)
	{
		case 1: return sig(colas.fin1)==colas.fr1; break;
		case 2: return cont=MAX/2; break;
	}
}

void cargar_cola(tcola&colas, char nuevo, int opt)
{
	if(cola_llena(colas,opt)==true)
	{
		cout<<"Colas llenas"<<endl;
	}
	else
	{
		switch(opt)
		{
			case 1: colas.fin1=sig(colas.fin1);
					colas.datos[colas.fin1]=nuevo; break;
			case 2: colas.fin2=sig(colas.fin2);
					colas.datos[colas.fin2]=nuevo;
					cont++; break;					
		}
	}
}

char sacar_cola (tcola &colas, int opt)
{
	if(cola_vacia(colas,opt)==true)
	{
		sacado=-999;
	}
	else
	{
		switch(opt);
		{
			case 1: colas.fr1=sig(colas.fr1);
					sacado=colas.datos[colas.fr1];break;
			case 2: colas.fr2=sig(colas.fr2);
					sacado=colas.datos[colas.fr2];
					cont--; break;
		}
	}
	return sacado;
}

char consultar_frente(tcola cola, int opt)
{
	char consultado;
	
	if(cola_vacia(colas,opt)==true)
	{
		consultado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1: consultado=colas.datos[sig(colas.fr1)]; break;
			case 2: consultado=colas.datos[sig(colas.fr2)]; break;
		}
	}
	return consultado;
}

char consultar_final(tcola cola, int opt)
{
	char consultado;
	
	if(cola_vacia(colas, opt)==true)
	{
		consultado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1: consultado=colas.datos[colas.fin1]; break;
			case 2: consultado=colas.datos[colas.fin2]; break;
		}
	}
	return consultado;
}
