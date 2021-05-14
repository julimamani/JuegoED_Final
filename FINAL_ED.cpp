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
typedef struct tArbol *pArbol;
typedef struct tArbol{
	Jugador dato;
	pArbol izq;
	pArbol der;
}tArbol;
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
	for(p;p!=NULL;p=p->sig)if(email==p->dato.email) b=false;
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
	if(existe(jugadores,email)) cout<<"Ingreso Incorrecto. El Jugador NO existe "<<endl;
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
		cout<<"Puntaje = 0 ";nuevo->dato.puntaje=0;cout<<"  **El puntaje se inicializara en 0.0, como nuevo jugador. Gane mas punto jugando!"<<endl;
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

void insertar(pArbol &bus, pArbol nuevo){
	if(bus==NULL){
		bus=nuevo;
	}else{
		if(bus->dato.puntaje > nuevo->dato.puntaje)insertar(bus->izq,nuevo);
		else insertar(bus->der,nuevo);
	}
}
void eliminar(tlista &j, string s){
	pnodo sacado,p;
	if(j.i==NULL){
		sacado=NULL;
	}else{
		if(j.i->sig==NULL){
			sacado=j.i;j.i=NULL;
		}else{
			if(j.i->dato.email==s){
				sacado=j.i;j.i=sacado->sig;sacado->sig=NULL;
			}else{
				p=j.i;
				while((p->sig)->dato.email!=s){
				p=p->sig;
				}
				sacado=p->sig;p->sig=sacado->sig;sacado->sig=NULL;
			}
			
		}
	}
}
void buscar_mayor(tlista &jugadores, pArbol &bus){
	pnodo p=new tnodo; int max=jugadores.i->dato.puntaje; pArbol nuevo= new tArbol;
	while(p->sig!=NULL){
		if((p->dato.puntaje) > max){
			nuevo->dato.puntaje=p->dato.puntaje;
			nuevo->dato.apellido=p->dato.apellido;
			nuevo->dato.email= p->dato.email;
			nuevo->dato.nombre=p->dato.nombre;
			max=p->dato.puntaje;
		}
	}
	eliminar(jugadores,nuevo->dato.email);
	insertar(bus,nuevo);
}

void iniciar_arbol(pArbol a){
	a->der=NULL;a->izq=NULL;a->dato.puntaje=0;
}
void mostrar(pArbol bus){
	if(bus!=NULL){
		cout<<"Nombre: "<<bus->dato.nombre<<"; Puntaje: "<<bus->dato.puntaje<<endl;
		mostrar(bus->izq);mostrar(bus->der);
	}
}
void ranking(tlista jugadores){
   pArbol bus; pnodo p=jugadores.i; iniciar_arbol(bus);
		for(p;p->sig!=NULL;p=p->sig){
			pArbol nuevo= new tArbol; nuevo->dato.puntaje=p->dato.puntaje;
			insertar(bus,nuevo);
		}
	tlista aux=jugadores; int i=0;
	while(i<3){
		 buscar_mayor(aux,bus);i++;
	}
	cout<<"Ranking: "<<endl;mostrar(bus);
}
pcasilla crear_casilla(pcasilla &nuevo,int cont){
	nuevo=new tcasilla;
	if(nuevo!=NULL){
		nuevo->ant=NULL;
		nuevo->sig=NULL;
		nuevo->dato.dato=cont+1;
	}
	return nuevo;
}

Tablero asignacion(Tablero &tablero){
	pcasilla aux=tablero.i;
	tablero.f->dato.suceso="LUNA";
	int c=rand() % 27 + 1;; int sucesos[10][1]; 
	sucesos[0][0]=2;sucesos[0][1]=2;
	sucesos[0][2]=3;sucesos[0][3]=3;sucesos[0][4]=3;
	sucesos[0][5]=4;sucesos[0][6]=4;sucesos[0][7]=4;
	sucesos[0][8]=5;sucesos[0][9]=5;sucesos[0][10]=5;
	
	sucesos[1][0]=0;sucesos[1][1]=0;
	sucesos[1][2]=0;sucesos[1][3]=0;sucesos[1][4]=0;
	sucesos[1][5]=0;sucesos[1][6]=0;sucesos[1][7]=0;
	sucesos[1][8]=0;sucesos[1][9]=0;sucesos[1][10]=0;
	for(int j=0;j<MAX_T;j++){
		for(){
			if(){
				if(){
					aux->dato.suceso="TORMETAS";
					aux->ant.dato.suceso="TORMETAS";
					aux->sig.dato.suceso="TORMETAS";
					
				}else{
					
				}
			}
		}
				
				c=rand() % 27 + 1;
		}
	}
	
	
	return tablero;
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
				nuevo->ant=tablero.f;
				(tablero.f)->sig=nuevo;
				tablero.f=nuevo;		
			}
			tablero.cant++;
			tablero=asignacion(tablero);
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
				ranking(jugadores);
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
