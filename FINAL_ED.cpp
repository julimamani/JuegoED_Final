#include<iostream>
#include <locale.h>
using namespace std;

class Jugador
{
  	// Attributes
	public:
		String nombre; String apellido; String email;float puntaje;
	// Operations
	public:
		//Jugador Especifico
		void registrar_J();
		Jugador consultar_J(string nombre);
		void modificar (Jugador j);
		//Todos los jugadores
		void listarTodos(); 

};
Jugador Jugador::consultar(string nombre){
	float result;
	result=sqrt(re*re+im*im);
}
void Jugador::modificar(Jugador j){
	re+=valor;
}
void Jugador::registrar_J(){
	re+=valor;
}
void submenu(){
	cout<<" --------------- SUBMENU/BIENVENIDO ---------------"<<endl;
	cout<<"1- Registrar jugador"<<endl;cout<<"2- Consultar/modificar un jugador especifico"<<endl; cout<<"3 - Listar todos los jugadores"<<endl;
	cout<<"4- EXIT"
	int op; Jugador jugador,j1;string r;
	switch(op):{
		case 1:{
			jugador.registrar_J();
			break;
		}
		case 2:{
			cout<<"¿Desea consultar o modificar un jugador específico? c= consultar m= modificar"; cin>>r;
			if (r=='c'||r=='C'){
				cout<<"Ingrese nombre de Jugador: "; cin>>r; jugador=jugador.consultar_J(r);
				if(j1!=NULL){
					cout<<"Se consulta el jugador: "<<endl;
					cout<<"		Nombre: "+jugador.nombre<<endl;
					cout<<"		Apellido: "+jugador.apellido<<endl;
					cout<<"		E-mail: "+jugador.email;
					cout<<"		Puntaje: "+jugador.puntaje;
				}else cout<<"Ingreso Incorrecto. El Jugador NO existe ";
			
			}else{
				if(r=='m'||r=='M'){
					cout<<"Ingrese nombre del Jugador a modificar: "; cin>>r; jugador=jugador.consultar_J(r);
					if(j1!=NULL)jugador.modificar(jugador);
					else cout<<"Ingreso incorrecto. El jugador NO existe ";
					
				}else cout<<"Respuesta ingresada invalida!"<<endl;
			}
			break;
		}
		case 3:{
			jugador.listarTodos();
			break;
		}
		
		case 4:{
			cout<<" Se volverá al Menu Principal...";
			break;
		}
				
	}
}
int main(){
	setlocale(LC_CTYPE,"Spanish");system ("color 24" );
	char op;
	cout<<" --------------- BIENVENIDO ---------------"<<endl;
	cout<<"	a) Administrar jugadores "<<endl; cout<<"	b) Generar tablero de juego "<<endl; 
	cout<<"	c) Iniciar la partida "<<endl; cout<<"	d) Ranking jugadores "<<endl;
	cout<<endl; cout<<"Ingrese selección: "; cin>>op; 
	switch(op):{
		case a:{
			submenu();
			break;
		}
		
		case b{
			tablero();
			break;
		}
		
		case c{
			iniciar_partida();
			break;
		}
		
		case d{
			ranking();
			break;
		}
		
			
	}
	system("pause");
	return 0;
}
