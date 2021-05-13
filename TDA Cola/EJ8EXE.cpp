#include<iostream>
#include<conio.h>

using namespace std;

const int MAX=50;

typedef char tcontenedor[MAX];

typedef struct tcola{
	tcontenedor datos;
	int frente;
	int final;
};

/////////////////////////////////

void iniciar_cola(tcola &cola)
{
	cola.frente=MAX-1;
	cola.final=MAX-1;
}

int sig(int a)
{
	if(a==MAX-1)
	{
		a=0;
	}
	else
	{
		a++;
	}
	return a;
}

bool cola_llena(tcola cola)
{
	return (sig(cola.final)==cola.frente);
}

void lwr2uppr(tcola cola, char &cadena)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		for (int i=0; i<MAX; i++)
		{
			cola.final++;
			if(cadena[i]<='z' && cadena[i]>='a')
			{
				cola.datos[cola.final]=cadena[i]-32;
			}
			else
			{
				cola.datos[cola.final]=cadena[i];
			}
		}
	}
}

//////////////////////////////////////////////////

int main()
{
	tcola cola;
	char cadena[10]={'H','o','l','a',' ','m','u','n','d','o'};
	
	for(int i=0; i<10, i++)
	{
		cout<<cadena[i];
	}
	cout<<endl;
	
	return 0;	
}
