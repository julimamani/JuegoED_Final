#include<iostream>

using namespace std;
const int MAX_J=50,MAX_T=28;
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
typedef  struct tcasilla *pcasilla;
typedef struct tcasilla{
	pnodo sig; 
	pnodo ant;
	int dato;
}tcasilla;
typedef struct Tablero{
	int cant;
	pnodo i;
	pnodo f;
}Tablero;

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
bool lista_vacia(tlista jugadores){
	return (jugadores.i=NULL);
}
bool existe(tlista jugadores, string email){
	pnodo p=jugadores.i; bool b=true;
	for(p;p!=NULL;p=p->sig){
		if(nombre==p->dato.nombre) b=false;
	}
	return b;
}
void consultar(tlista jugadores, string email){
	pnodo p=jugadores.i; 
	for(int i=1;i<=jugadores.cant;i++){
		if(p->dato.email==email) {	
			cout<<"Se consulta el jugador: "<<endl;
			cout<<"		Nombre: "<<p->dato.nombre<<endl;
			cout<<"		Apellido: "<<p->dato.apellido<<endl;
			cout<<"		E-mail: "<<p->dato.email<<endl;
			cout<<"		Puntaje: "<<p->dato.puntaje<<endl;
		}else{
			p=p->sig;
		}
	}
	if(existe(jugadores,nombre)) cout<<"Ingreso Incorrecto. El Jugador NO existe "<<endl;
}
void modificar(string email,tlista &jugadores){
	int r;pnodo p=jugadores.i; 
	for(int i=1;i<=jugadores.cant;i++){
		if(p->dato.email==email){
			cout<<"(1)Nombre: "<<p->dato.nombre;cout<<endl;
			cout<<"(2)Apellido: "<<p->dato.apellido;cout<<endl;
			cout<<"(3)Email: "<<p->dato.email;cout<<endl;
			cout<<"¿Qu\x82 campo desea modificar? Ingrese el numero del campo elegido"<<endl; 
			cout<<"Si desea cambiar toda la informacion del jugador ingrese 0		";cin>>r;
			if(r==1){
				cout<<"Se modificara el campo nombre: "<<endl;
				cout<<"Ingrese nuevo Nombre: ";cin>>p->dato.nombre;
				cout<<endl<<"----------------------------------------"<<endl;
				cout<<"Jugador Modificado! Nuevos datos: ";
				cout<<"Nombre: "<<p->dato.nombre;cout<<endl;
				cout<<"Apellido: "<<p->dato.apellido;cout<<endl;
				cout<<"Email: "<<p->dato.email;cout<<endl; i =jugadores.cant+1;
			}else{
				if(r==2){
					cout<<"Se modificara el campo Apellido: "<<endl;
					cout<<"Ingrese nuevo Apellido: ";cin>>p->dato.apellido;
						cout<<"Jugador Modificado! Nuevos datos: ";
						cout<<endl<<"----------------------------------------"<<endl;
						cout<<"Nombre: "<<p->dato.nombre;cout<<endl;
						cout<<"Apellido: "<<p->dato.apellido;cout<<endl;
						cout<<"Email: "<<p->dato.email;cout<<endl; 
					i =jugadores.cant+1;
				}else{
					if(r==3){
						cout<<"Se modificara el campo Email: "<<endl;
						cout<<"Ingrese nuevo Email: ";cin>>p->dato.email; 
						cout<<"----------------------------------------"<<endl;
							cout<<"Jugador Modificado! Nuevos datos: ";
							cout<<"Nombre: "<<p->dato.nombre;cout<<endl;
							cout<<"Apellido: "<<p->dato.apellido;cout<<endl;
							cout<<"Email: "<<p->dato.email;cout<<endl;i =jugadores.cant+1;
					}else{
						if(r==1){
							cout<<"Se modificará todo al informacion del jugador"<<endl;
							cout<<"	Ingrese nuevo Nombre: ";cin>>p->dato.nombre;cout<<endl;
							cout<<"	Ingrese nuevo Apellido: ";cin>>p->dato.apellido;cout<<endl;
							cout<<"	Ingrese nuevo Email: ";cin>>p->dato.email;cout<<endl;
							cout<<endl<<"----------------------------------------"<<endl;
								cout<<"Jugador Modificado! Nuevos datos: ";
								cout<<"Nombre: "<<p->dato.nombre;cout<<endl;
								cout<<"Apellido: "<<p->dato.apellido;cout<<endl;
								cout<<"Email: "<<p->dato.email;cout<<endl;
							i =jugadores.cant+1;
					}else{
						cout<<"Ingreso invalido! El numero no corresponde a ningun campo "; i =jugadores.cant+1;
						}
					}
				}
			}
		}p=p->sig;
	}
}
void registrar_J(tlista &jugadores){
	pnodo nuevo=new tnodo;
	if(nuevo!=NULL){
		cout<<"Ingrese informacion del jugador: "<<endl;
		cout<<"Nombre: ";cin>>nuevo->dato.nombre;cout<<endl;
		cout<<"Apellido: ";cin>>nuevo->dato.apellido;cout<<endl;
		cout<<"Email: ";cin>>nuevo->dato.email;cout<<endl;
		cout<<"Puntaje = 0.0 ";nuevo->dato.puntaje=0.0;cout<<"  **El puntaje se inicializara en 0.0, como nuevo jugador. Gane mas punto jugando!"<<endl;
		nuevo->sig=NULL;
		if(jugadores.i==NULL){
				jugadores.i=nuevo; jugadores.cant++;	
		}else{
			if(existe(jugadores,nuevo->dato.email)==false){
				cout<<"El jugador ya se encuentra cargado, no es posible registrar jugadores repetidos"<<endl;
				delete nuevo;
			}else{
				if(jugadores.cant!=MAX_J){
					pnodo p=jugadores.i; 
					for(p;p->sig!=NULL;p=p->sig){
					}
					p->sig=nuevo;jugadores.cant++;
				}else{
					cout<<"Se almacenan como maximo 50 jugadores. Tope alcanzado "<<endl;
				}
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
	cout<<"4- SALIR"<<endl;  cout<<endl<<"Ingrese selecci\xA2n: ";cin>>op;cout<<endl; 
	switch(op){
		case 1:{
			registrar_J(jugadores);
			break;
		}
		case 2:{
			if(lista_vacia(jugadores)!=true){
				cout<<"Desea consultar o modificar un jugador especifico?";cout<<"12= consultar 30= modificar . Eleccion: "; cin>>r;
				if (r=="12"){
					cout<<"Ingrese email del jugador: "; cin>>r; consultar(jugadores,r);
				}else{
					if(r=="30"){
						cout<<"Ingrese email del jugador a modificar: "; cin>>r;
						if(existe(jugadores,r)!=true) modificar(r,jugadores);
						else cout<<"Ingreso incorrecto. El jugador NO existe ";
					}else cout<<"Respuesta ingresada invalida!"<<endl;
				}
			}else cout<<"No se puede consultar o modificar, no hay jugadores registrados"<<endl;
			
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
void ranking(tlista jugadores){
     pnodo actual , siguiente;
     float t; actual = jugadores.i;
     while(actual->sig != NULL) {
          siguiente = actual->sig;
          while(siguiente!=NULL)
          {
               if(actual->dato.puntaje > siguiente->dato.puntaje){
                    t = siguiente->dato.puntaje;
                    siguiente->dato.puntaje = actual->dato.puntaje;
                    actual->dato.puntaje = t;          
               }
               siguiente = siguiente->sig;                    
          }    
          actual = actual->sig;
          siguiente = actual->sig;
           
     }
}
pcasilla crear_casilla(pcasilla &nuevo,int cont){
	nuevo=new tcasilla;
	if(nuevo!=NULL){
		nuevo.ant=NULL;
		nuevo.sig=NULL;
		nuevo.dato=cont+1;
	}
	return nuevo;
}

void generar_t(Tablero &tablero){
	for (int i=1; i<=MAX_T;i++){
		pcasilla nuevo;nuevo=crear_casilla(nuevo,tablero.cant);
		if(nuevo==NULL){
			cout<<"Memoria insuficiente, no se puede crear casillas"<<endl; i=MAX_T+1;
		}else{
			if(tablero.i==NULL && tablero.f==NULL){
				tablero.i=nuevo;tablero.f=nuevo; 
			}else{
				nuevo.ant=tablero.f;
				tablero.f->sig=nuevo;
				tablero.f=nuevo;		
			}
			tablero.cant++;
			
		}
		delete nuevo;
	}
}
void iniciar_tablero(Tablero &tablero){
	tablero.i=NULL; tablero.cant=0; tablero.f=NULL;
}
void menu(){
		cout<<endl;
		cout<<" --------------- BIENVENIDO ---------------"<<endl;
		cout<<"	a) Administrar jugadores "<<endl; cout<<"	b) Generar tablero de juego "<<endl; 
		cout<<"	c) Iniciar la partida "<<endl; cout<<"	d) Ranking jugadores "<<endl;cout<<"	e) SALIR"<<endl;
}
int main(){
	//system ("color 98" ); 
	char op; tlista jugadores; iniciar_lista(jugadores);bool band=true; Tablero tablero; iniciar_tablero(tablero);
	do{
		menu();
		cout<<endl; cout<<"Ingrese selecci\xA2n: ";cin>>op;cout<<endl;
		switch(op){
			case 'a':{
				submenu(jugadores);
				break;
			}
			
			case 'b':{
				generar_t(tablero);
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
