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
		cout<<"Se registran "<<jugadores.cant<<" jugadores: "<<endl;int i=1;
	 for(p=jugadores.i;p!=NULL;p=p->sig){
	 		cout<<i<<") Nombre: "<<p->dato.nombre;cout<<"	";
			cout<<"Apellido: "<<p->dato.apellido;cout<<"	";
			cout<<"Email: "<<p->dato.email;cout<<"	  ";
			cout<<"Puntaje: "<<p->dato.puntaje<<endl;i++;
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
							cout<<"Jugador Modificado! Nuevos datos: "<<endl;
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
								cout<<"Jugador Modificado! Nuevos datos: "<<endl;
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
void crear_casilla(pcasilla &nuevo,int cont){
	nuevo=new tcasilla;
	if(nuevo!=NULL){
		nuevo->ant=NULL;
		nuevo->sig=NULL;
		nuevo->dato.dato=cont+1;
		nuevo->dato.suceso="";
	}
}
void iniciar_tablero(Tablero &tablero){
	tablero.i=NULL; tablero.cant=0; tablero.f=NULL;
}
void asignacion(Tablero &tablero){
	pcasilla aux=tablero.i; 
	Tablero t; 
	iniciar_tablero(t);
	t=tablero; 
	int c=rand() % 27 + 1; int sucesos[3]; int i=0; 
	
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
void generar_t(Tablero &tablero, bool &band){
	pcasilla nuevo;
	for (int i=1; i<MAX_T;i++){
		crear_casilla(nuevo,tablero.cant);
		if(nuevo==NULL){
			cout<<"Memoria insuficiente, no se puede crear casillas"<<endl; i=MAX_T;
		}else{
			if(tablero.i==NULL && tablero.f==NULL){
				tablero.i=nuevo;tablero.f=nuevo; 
			}else{
				nuevo->ant=tablero.f;
				(tablero.f)->sig=nuevo;
				tablero.f=nuevo;		
			}
			tablero.cant++;
			asignacion(tablero);
			
		}
		delete nuevo;
	}
	band=true;if(nuevo!=NULL)cout<<"Tablero generado con exito!"<<endl;
}
void iniciar_partida(tlista jugadores, Tablero t){
	listarTodos(jugadores); int i=0; int puntaje1,puntaje2; puntaje1=puntaje2=0;
	cout<<"**Ingrese solo el numero del jugador elegido**"<<endl;
	pcasilla p;  int dado=0; int dado2=0; pnodo j1=jugadores.i;pnodo j2=jugadores.i;char cTecla; bool lanzado=true; p=t.i; int a=0;
	cout<<"Elija jugador 1: "; cin>>i; cout<<endl;  
	for(int h=0;h<i;h++){
		j1=j1->sig;
	}
	cout<<"Elija jugador 2: "; cin>>i; cout<<endl;
	for(int x=0;x<i;x++){
		j2=j2->sig;
	}
	
	for(int y=0; y<=3;y++){
		asignacion(t);cout<<"JUGADOR 1"<<endl;
		for(int j=0;j<28;j++){
			while(lanzado){
				cout<<"Lance dado(d): "; cin>>cTecla;
				if(cTecla!='d'){
					cout<<"Presione ENTER de otro modo no se lanzara el dado";
				}else{
					dado=rand() % 6 + 1; cout<<"Se avanzaran "<<dado<<" casillas"<<endl;lanzado=false;
				}
			}
			cout<<dado<<endl;
			while(a<dado){
				a++;cout<<"HOLA";p=p->sig;
			}
			a=0;
			if(p->dato.suceso=="TORMENTAS"||p->dato.suceso=="ASTEROIDES")puntaje1-=2;
			else{
				if(p->dato.suceso=="ESTRELLAS") puntaje1+=5;
				else if(p->dato.suceso=="ALIENS") puntaje1=0;
			}
			j=j+dado; 
			if(j>=28){
				cout<<"Llego a la luna! "<<j1->dato.nombre<<", "<<j1->dato.email<<endl;p=t.i;
			}
		}
		asignacion(t);cout<<"JUGADOR 2"<<endl;
		for(int j=0;j<=28;j++){
			while(lanzado){
				cout<<"Lance dado(d): "; cin>>cTecla;
				if(cTecla!='d'){
					cout<<"Presione ENTER de otro modo no se lanzara el dado";
				}else{
					dado=rand() % 6 + 1; cout<<"Se avanzaran "<<dado2<<" casillas"; lanzado=false;
				}
			}
			for(int z=0;z<dado;z++){
				p=p->sig; 
			}
			if(p->dato.suceso=="TORMENTAS"||p->dato.suceso=="ASTEROIDES")puntaje2-=2;
			else{
				if(p->dato.suceso=="ESTRELLAS") puntaje2+=5;
				else if(p->dato.suceso=="ALIENS") puntaje2=0;
			}
			if(j>=28){
				cout<<"Llego a la luna! "<<j2->dato.nombre<<", "<<j2->dato.email<<endl;p=t.i;
			}
			j+=dado;
		}
		
	}
	if(puntaje1>puntaje2){
		cout<<"Ganador: "<<j1->dato.nombre<<" , "<<j1->dato.email<<endl; 
		j1->dato.puntaje+=puntaje1;
	}else{
		if(puntaje2>puntaje1){
			cout<<"Ganador: "<<j2->dato.nombre<<" , "<<j2->dato.email<<endl; 
			j2->dato.puntaje+=puntaje2;	
		}else{
			cout<<"Empate no se sumaran ni restaran los puntos de la partida "<<endl;
		}
	}
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
   pArbol bus; iniciar_arbol(bus);
	tlista aux=jugadores; int i=0;
	while(i<3){
		 buscar_mayor(aux,bus);i++;
	}
	cout<<"Ranking: "<<endl;mostrar(bus);
}



void menu(){
		cout<<endl;
		cout<<" --------------- BIENVENIDO ---------------"<<endl;
		cout<<"	a) Administrar jugadores "<<endl; cout<<"	b) Generar tablero de juego "<<endl; 
		cout<<"	c) Iniciar la partida "<<endl; cout<<"	d) Ranking jugadores "<<endl;cout<<"	e) SALIR"<<endl;
}
int main(){
	//system ("color 98" ); 
	char op; tlista jugadores; iniciar_lista(jugadores);bool band=false; Tablero tablero; iniciar_tablero(tablero);
	do{
		menu();
		cout<<endl; cout<<"Ingrese selecci\xA2n: ";cin>>op;cout<<endl;
		switch(op){
			case 'a':{
				submenu(jugadores);
				break;
			}
			
			case 'b':{
				generar_t(tablero,band);
				break;
			}
			
			case 'c':{
				if(band && (jugadores.cant>=2) )iniciar_partida(jugadores,tablero);
				else cout<<" Para generar partida, debe generar un tablero y registrar como minimo 2 jugadores "<<endl;
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
