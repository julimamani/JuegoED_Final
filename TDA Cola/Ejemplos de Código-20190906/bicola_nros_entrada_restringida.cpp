#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

const int MAX=20;


typedef int contenedor[MAX];
typedef struct tcola
        { contenedor datos;
          int frente,final;
        };

void init_queue(tcola &q);
bool full_queue(tcola q);
bool empty_queue(tcola q);
int pop_queue(tcola &q, int opcion);
int top_queue(tcola q);
int bottom_queue(tcola q);
int next(int indice);
int previous(int indice);
void push_queue(tcola &q,int nuevo);
            

main()
{ tcola cola;
  int nro, opc, i; 
  
  char resp;
  init_queue(cola);
  do{
  cout << "Ingrese nro: ";
  cin >> nro;
  push_queue(cola,nro);
  cout << "Desea cargar mas numeros presione s o S para seguir....   "<<endl;
  cin>> resp;
  }while((resp=='s')||(resp=='S'));

  for(i=0;empty_queue(cola)==false;i++)
  {
  	cout << "Por donde sacara el dato presione 1-frente y 2- final ?   "<<endl;
    cin >> opc;
    cout<<"El elemento de la cola es "<<pop_queue(cola,opc)<<endl;
  }
  cout << "*************** COLA VACIA **********************....   "<<endl;
  cout << "***************fin del programa **********************....   "<<endl;
  system("pause");
}


void init_queue(tcola &q)
{ q.frente=MAX-1;
  q.final=MAX-1;
}

bool full_queue(tcola q)
{ return next(q.final)==q.frente;
}

void push_queue(tcola &q, int nuevo)
    {
      if (full_queue(q)== true)
          cout<<"Cola completa";
      else
          {
		  q.final=next(q.final);
          q.datos[q.final]=nuevo;
          cout << "elemento agregado   " <<q.datos[q.final] <<endl;
		  }
    }
 
bool empty_queue(tcola q)
{ return q.frente==q.final;
}

int pop_queue(tcola &q, int opcion)
 { 
		    int aux;
			if (empty_queue(q)==true)
               aux=-1;
              else
                if (opcion==1)//extrae elementos por el frente
                    {
					q.frente=next(q.frente);
                    aux=q.datos[q.frente];
                    // el siguiente mensaje solo se utiliza para verificacion, no forma parte de la operación pop_queue (las funciones no deben contener sentencias ESCRIBIR)
                    //cout << "elemento extraido del frente: " << aux << endl;
					}
                else //extrae elementos por el final
                    {
                    aux=q.datos[q.final];
                    q.final=previous(q.final);
                    // el siguiente mensaje solo se utiliza para verificacion, no forma parte de la operación pop_queue (las funciones no deben contener sentencias ESCRIBIR)
                   // cout << "elemento extraido final: " << aux << endl;

					}
return aux;
 }

int top_queue(tcola q)
{int aux;
  if (empty_queue(q)==true)
     aux=-1;
  else
     aux=q.datos[next(q.frente)];
  return aux;
}

int bottom_queue(tcola q)
{int aux;
  if (empty_queue(q)==true)
     aux=-1;
  else
     aux=q.datos[q.final];
  return aux;
}

int next(int indice)
{ if (indice==MAX-1)
     indice=0;
  else
     indice++;
  return indice;
}

int previous(int indice)
{ if (indice==0)
     indice=MAX-1;
  else
     indice--;
  return indice;
}
