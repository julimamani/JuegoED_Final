
#include<iostream>

using namespace std;
typedef  struct tnodo *pnodo;
typedef struct Jugador {
	string nombre; string apellido; string email;float puntaje;
}jugador;

typedef struct tnodo{
	pnodo sig; 
	Jugador dato;
}tnodo;
typedef struct tlista{
	int cant;
	pnodo i;
}tlista;

void iniciar_lista(tlista &jugadores){
	jugadores.i=NULL;
	jugadores.cant=0;
}
void listarTodos(tlista jugadores){
	//Todos los jugadores
	pnodo p;
	if(jugadores.i==NULL){
		cout<<"No se ha registrado ningun jugador. ";
	}else{
		cout<<"Se registran "<<jugadores.cant<<" jugadores: "<<endl;
	 for(p=jugadores.i;p!=NULL;p=p->sig){
	 	cout<<"Nombre: "<<p->dato.nombre;cout<<"	";
			cout<<"Apellido: "<<p->dato.apellido;cout<<"	";
			cout<<"Email: "<<p->dato.email;cout<<"	";
			cout<<"Puntaje: "<<p->dato.puntaje<<endl;
		}	                                        
	}
	
}
Jugador consultar(string nombre,tlista jugadores){
	Jugador jugador;pnodo p=jugadores.i; 
	for(p;p=NULL;p=p->sig){
		if(p->dato.nombre==nombre) {
			jugador.apellido=p->dato.apellido;
			jugador.email=p->dato.email;
			jugador.nombre=p->dato.nombre;
			jugador.puntaje=p->dato.puntaje;
		}
	}
	return jugador;
}
bool existe(tlista jugadores, string nombre){
	pnodo p=jugadores.i; bool b=true;
	for(p;p!=NULL;p=p->sig){
		if(nombre==p->dato.nombre) b=false;
	}
	return b;
}
Jugador modificar(Jugador &jugador,tlista &jugadores){
	int r;pnodo p=jugadores.i; 
	for(p;p->sig!=NULL;p=p->sig){
		if(p->dato.nombre==jugador.nombre){
			cout<<"(1)Nombre: ";cin>>jugador.nombre;cout<<endl;
			cout<<"(2)Apellido: ";cin>>jugador.apellido;cout<<endl;
			cout<<"(3)Email: ";cin>>jugador.email;cout<<endl;
			cout<<"¿Que campo desea modificar? Ingrese el numero del campo elegido"<<endl; 
			cout<<"Si desea cambiar toda la informacion del jugador ingrese 0		";cin>>r;
			if(r==1){
				cout<<"Se modificara el campo nombre: "<<endl;
				cout<<"Ingrese nuevo Nombre: ";cin>>jugador.nombre;
			}else{
				if(r==2){
					cout<<"Se modificara el campo Apellido: "<<endl;
					cout<<"Ingrese nuevo Apellido: ";cin>>jugador.apellido;
				}else{
					if(r==3){
						cout<<"Se modificara el campo Email: "<<endl;
						cout<<"Ingrese nuevo Email: ";cin>>jugador.email;
					}else{
						if(r==1){
							cout<<"Se modificará todo al informacion del jugador"<<endl;
							cout<<"	Ingrese nuevo Nombre: ";cin>>jugador.nombre;cout<<endl;
							cout<<"	Ingrese nuevo Apellido: ";cin>>jugador.apellido;cout<<endl;
							cout<<"	Ingrese nuevo Email: ";cin>>jugador.email;cout<<endl;
					}else{
						cout<<"Ingreso invalido! El numero no corresponde a ningun campo ";
						}
					}
				}
			}
		}
	}
 return jugador;

}

void registrar_J(tlista &jugadores){
	pnodo nuevo=new tnodo;
	if(nuevo!=NULL){
		cout<<"Ingrese informacion del jugador: "<<endl;
		cout<<"Nombre: ";cin>>nuevo->dato.nombre;cout<<endl;
		cout<<"Apellido: ";cin>>nuevo->dato.apellido;cout<<endl;
		cout<<"Email: ";cin>>nuevo->dato.email;cout<<endl;
		cout<<"Puntaje = 0.0";nuevo->dato.puntaje=0.0;cout<<"**El puntaje se inicializara en 0.0, como nuevo jugador. Gane mas punto jugando!"<<endl;
		nuevo->sig=NULL;
		if(jugadores.i==NULL){
				jugadores.i=nuevo; jugadores.cant++;	
		}else{
			if(existe(jugadores,nuevo->dato.nombre)==false)cout<<"El jugador ya se encuentra cargado, no es posible registrar jugadores repetidos";
			else{
				pnodo p=jugadores.i; 
				for(p;p->sig!=NULL;p=p->sig){
				}
				p->sig=nuevo;jugadores.cant++;	
			}
		}
		
	}else{
		cout<<"Memoria insuficiente para agregar nuevo jugador!";
	}
}
void submenu(tlista &jugadores){
	int op;Jugador jugador;string r;
	do{
	cout<<endl;cout<<" --------------- SUBMENU/BIENVENIDO ---------------"<<endl;
	cout<<"1- Registrar jugador"<<endl;cout<<"2- Consultar/modificar un jugador especifico"<<endl; cout<<"3- Listar todos los jugadores"<<endl;
	cout<<"4- SALIR"<<endl;  cout<<"Ingrese selecci\xA2n: ";cin>>op;cout<<endl; 
	switch(op){
		case 1:{
			registrar_J(jugadores);
			break;
		}
		case 2:{
			cout<<" ¿ Desea consultar o modificar un jugador específico? 12= consultar 30= modificar	"; cin>>r;
			if (r=="12"){
				cout<<"Ingrese nombre de Jugador: "; cin>>r; jugador=consultar(jugador.nombre,jugadores);
				if(jugador.apellido!=""){
					cout<<"Se consulta el jugador: "<<endl;
					cout<<"		Nombre: "+jugador.nombre<<endl;
					cout<<"		Apellido: "+jugador.apellido<<endl;
					cout<<"		E-mail: "+jugador.email;
					cout<<"		Puntaje: "<<jugador.puntaje;
				}else cout<<"Ingreso Incorrecto. El Jugador NO existe ";
			
			}else{
				if(r=="30"){
					cout<<"Ingrese nombre del Jugador a modificar: "; cin>>jugador.nombre; jugador=consultar(jugador.nombre,jugadores);
					if(jugador.apellido!="")modificar(jugador,jugadores);
					else cout<<"Ingreso incorrecto. El jugador NO existe ";
					
				}else cout<<"Respuesta ingresada invalida!"<<endl;
			}
			break;
		}
		case 3:{
			listarTodos(jugadores);
			break;
		}
		
		case 4:{
			cout<<"Se volver\xA0 al Menu Principal..."<<endl; 
			break;
		}
		
		default:{
			cout << "OPCI\340N NO VALIDA" << endl;
			break;
		}		
	  }		
	}while(op!=4);
}
void iniciar_partida(){
	
}
void ranking(){
	
}
void tablero(){
	
}

void menu(){
		cout<<endl;
		cout<<" --------------- BIENVENIDO ---------------"<<endl;
		cout<<"	a) Administrar jugadores "<<endl; cout<<"	b) Generar tablero de juego "<<endl; 
		cout<<"	c) Iniciar la partida "<<endl; cout<<"	d) Ranking jugadores "<<endl;cout<<"	e) SALIR"<<endl;
}
int main(){
	//system ("color 98" ); 
	char op; tlista jugadores; iniciar_lista(jugadores);bool band=true;
	do{
		menu();
		cout<<endl; cout<<"Ingrese selecci\xA2n: ";cin>>op;cout<<endl;
		switch(op){
			case 'a':submenu(jugadores);
				break;
			
			case 'b':{
				tablero();
				break;
			}
			
			case 'c':{
				iniciar_partida();
				break;
			}
			
			case 'd':{
				ranking();
				break;
			}
			case 'e':{
				cout<<"ADIOS !"<<endl;
				break;
			}
			default:{
				cout << "OPCI\340N NO VALIDA" << endl;
				break;
			}
					
		}
	}while(op!='e');
	//system("pause");
	return 0;
}
