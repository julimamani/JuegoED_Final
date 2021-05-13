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
int pop_queue(tcola &q);
int top_queue(tcola q);
int bottom_queue(tcola q);
int next(int indice);
int previous(int indice);
void push_queue(tcola &q,int nuevo,int opcion);
            

main()
{ tcola cola;
  int nro, opc, i; 
  
  char resp;
  init_queue(cola);
  do{
  cout << "Ingrese nro: ";
  cin >> nro;
  cout << "Por donde cargara el dato presione 1-final y 2-frente ?   "<<endl;
  cin >> opc;
  push_queue(cola,nro,opc);
  cout << "Desea cargar mas numeros presione s o S para seguir....   "<<endl;
  cin>> resp;
  }while((resp=='s')||(resp=='S'));
   while(empty_queue(cola)!=true)
     cout<<"El elemento de la cola es "<<pop_queue(cola)<<endl;
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

 
void push_queue(tcola &q,int nuevo,int opcion)
            { if (full_queue(q)==true)
               cout << "No hay espacio" << endl;
              else
                if (opcion==1)
                    {
                    q.final=next(q.final);
                    q.datos[q.final]=nuevo;
                    // el siguiente mensaje solo se utiliza para verificacion, no forma parte de la operación push_queue
                    // cout << "elemento agregado al final: " << bottom_queue(q) <<endl;
                    }
                else
                    {
                    q.datos[q.frente]=nuevo;
                    q.frente=previous(q.frente);                    
                    // el siguiente mensaje solo se utiliza para verificacion, no forma parte de la operación push_queue
                    // cout << "elemento agregado al frente: " << top_queue(q) <<endl;
                    }
 }

bool empty_queue(tcola q)
{ return q.frente==q.final;
}

int pop_queue(tcola &q)
{int aux;
  if (empty_queue(q)==true)
     aux=-1;
  else
     { q.frente=next(q.frente);
       aux=q.datos[q.frente];
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
