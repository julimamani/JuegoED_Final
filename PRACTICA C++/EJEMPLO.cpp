#include<iostream>
#include<stdlib.h>
using namespace std;
const int MAX_J=50,MAX_T=28;
typedef  struct tnodo *pnodo;
typedef struct Jugador {
	string nombre; string apellido; string email;int puntaje;
}jugador;
typedef struct tnodo{
	pnodo sig; 
	Jugador dato;
}tnodo;
typedef struct tlista{
	int cant;
	pnodo i;
}tlista;
typedef  struct tcasilla *pcasilla;
typedef struct casilla{
	int dato;//numero de casilla en el tablero
	string suceso;
}casilla;
typedef struct tcasilla{
	pcasilla sig; 
	pcasilla ant;
	casilla dato;
}tcasilla;
typedef struct Tablero{
	int cant;
	pcasilla i;
	pcasilla f;
}Tablero;
void iniciar_tablero(Tablero &tablero){
	tablero.i=NULL; tablero.cant=0; tablero.f=NULL;
}
void asignacion(Tablero &tablero){
	pcasilla aux=tablero.i; 
	Tablero t; 
	iniciar_tablero(t);
	t=tablero; 
	int c=rand() % 27 + 1; int sucesos[3]; int i=0; cout<<endl<<"HOLA";
	
		for(int h=0;h<(sucesos[2]==3);h++){
			for(int j=0;j<MAX_T-1;j++){
				if(c==aux->dato.dato){
					if(aux->dato.suceso==""){
							aux->dato.suceso="ALIENS";sucesos[i]++;
							if(aux->ant->dato.suceso==""){
								aux->ant->dato.suceso="ALIENS";sucesos[i]++;
							}
							if(aux->sig->dato.suceso==""){
								aux->sig->dato.suceso="ALIENS";sucesos[i]++; 
							}
					}
				}
				aux=aux->sig;
			}
			c=rand() % 27 + 1;
		}
		for(int h=0;h<(sucesos[0]==3);h++){
			for(int j=0;j<MAX_T-1;j++){
				if(c==aux->dato.dato){
					if(aux->dato.suceso==""){
								aux->dato.suceso="TORMETAS";sucesos[i]++;
								if(aux->ant->dato.suceso==""){
									aux->ant->dato.suceso="TORMETAS";sucesos[i]++;
								}
								if(aux->sig->dato.suceso==""){
										aux->sig->dato.suceso="TORMETAS";sucesos[i]++;
								}
								
					}
				}
				aux=aux->sig;
			}
			c=rand() % 27 + 1;
		}
		for(int h=0;h<(sucesos[3]==3);h++){
			for(int j=0;j<MAX_T-1;j++){
				if(c==aux->dato.dato){
					if(aux->dato.suceso==""){
							aux->dato.suceso="ASTEROIDES";sucesos[i]++; 
							if(aux->ant->dato.suceso==""){
								aux->ant->dato.suceso="ASTEROIDES";sucesos[i]++; 
							} if(aux->sig->dato.suceso==""){
								aux->sig->dato.suceso="ASTEROIDES";sucesos[i]++; 
							}		
					}
				}
				aux=aux->sig;
			}
			c=rand() % 27 + 1;
		}
		
		for(int h=0;h<(sucesos[1]==2);h++){
			for(int j=0;j<MAX_T-1;j++){
				if(c==aux->dato.dato){
					if(aux->dato.suceso==""){
							if((aux->ant->dato.suceso!="ESTRELLAS")||(aux->sig->dato.suceso!="ESTRELLAS")){
									aux->dato.suceso="ESTRELLAS";sucesos[i]++;
							}
					}
				}
				aux=aux->sig;
			}
			c=rand() % 27 + 1;
		}
}

int main(){
	Tablero tablero; iniciar_tablero(tablero);cout<<"TABLERO INICIADO";
	asignacion(tablero);cout<<endl<<"ASIGNACION";
	return 0;
}