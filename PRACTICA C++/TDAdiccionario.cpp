#include<iostream>

using namespace std;

typedef struct tnodo *pnodo;
typedef struct tnodo{
	string dato;
	pnodo sig;
};


void crear_nodo(pnodo &nodo, string dato){
	nodo = new tnodo;
	nodo->dato = dato;
	nodo->sig = NULL;
}


void iniciar_lista(pnodo &lista){
	lista = NULL;
}

void agregar_palabra(pnodo &lista, string dato){
	pnodo nodo;
	crear_nodo(nodo, dato);
	if(lista == NULL){
		lista = nodo;
	} else{
		nodo->sig = lista;
		lista = nodo;
	}
}
pnodo quitar_palabra(pnodo &lista, string dato){
	pnodo encontrado = NULL;
	if(lista != NULL){
		if(lista->dato == dato){
			encontrado = lista;
			lista = lista->sig;
		} else{
			for(pnodo p = lista; p->sig != NULL; p = p->sig){
				if(p->sig->dato == dato){
					encontrado = p->sig;
					p->sig = p->sig->sig;
					break;
				}
			}
		}
	}
	return encontrado;
}
bool consultar_palabra(pnodo &lista, string dato){
	bool encontrado = false;
	for(pnodo p = lista; p != NULL; p = p->sig){
		if(p->dato == dato){
			encontrado = true;
		}
	}
	return encontrado;
}
void listar(pnodo lista){
	for(pnodo p = lista; p != NULL; p = p->sig){
		cout<<p->dato<<endl;
	}
}
typedef struct tdiccionario{
	int tamano;
	pnodo claves[26];
};
void iniciar_diccionario(tdiccionario &diccionario){
	diccionario.tamano = 0;
	for(int i = 0; i < 26; i++){
		iniciar_lista(diccionario.claves[i]);
	}
}
int consultar_tamano(tdiccionario &diccionario){
	return diccionario.tamano;
}
void agregar_palabra(tdiccionario &diccionario, string dato){
	int clave = dato[0] - 'a';
	if(consultar_palabra(diccionario.claves[clave], dato) == false){
		agregar_palabra(diccionario.claves[clave], dato);
		diccionario.tamano++;
	}
}
string quitar_palabra(tdiccionario &diccionario, string dato){
	int clave = dato[0] - 'a';
	string eliminada = "";
	if(consultar_palabra(diccionario.claves[clave], dato) == true){
		pnodo encontrado = quitar_palabra(diccionario.claves[clave], dato);
		diccionario.tamano--;
		eliminada = encontrado->dato;
	}
	return eliminada;
}
bool consultar_palabra(tdiccionario &diccionario, string dato){
	int clave = dato[0] - 'a';
	return consultar_palabra(diccionario.claves[clave], dato);
}
void listar(tdiccionario diccionario){
	for(int i = 0; i < 26; i++){
		listar(diccionario.claves[i]);
	}
}
int main(){
	tdiccionario dic;
	iniciar_diccionario(dic);
	agregar_palabra(dic, "nueva");
	agregar_palabra(dic, "arbol");
	agregar_palabra(dic, "amigo");
	agregar_palabra(dic, "picado");
	agregar_palabra(dic, "ndeah");
	agregar_palabra(dic, "picantovich");
	agregar_palabra(dic, "atilio");
	agregar_palabra(dic, "puederserpa");
	agregar_palabra(dic, "oviedo");
	agregar_palabra(dic, "gordofobia");
	agregar_palabra(dic, "gordofobia");
	agregar_palabra(dic, "gordofobia");
	quitar_palabra(dic, "atilio");
	cout<<consultar_tamano(dic)<<endl;
	listar(dic);
	return 0;
}
