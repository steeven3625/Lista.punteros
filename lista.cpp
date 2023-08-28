#include<iostream>
#include<conio.h>
using namespace std;

struct nodo {
	int valor;
	nodo*sgt;
}; 
void Lista (nodo*&,int);
void Mostrar(nodo*);

int main (){
	nodo*lista = NULL;
	int valor;
	
	cout<<"Digite un valor a la lista\n";cin>>valor;
	Lista(lista, valor);
		cout<<"Digite un valor a la lista\n";cin>>valor;
	Lista(lista, valor);
		cout<<"Digite un valor a la lista\n";cin>>valor;
	Lista(lista, valor);
		cout<<"Digite un valor a la lista\n";cin>>valor;
	Lista(lista, valor);
	
	Mostrar (lista);
	return 0;
}


void Lista (nodo *&lista, int a){
	nodo*nuevo=new nodo();
	nuevo->valor= a;
	nodo*aux1 =lista;
	nodo*aux2;
	
	while ((aux1 != NULL) && (aux1->valor < a)){
		aux2= aux1;
		aux1 = aux1->sgt;
	}
	if (lista == aux1){
		lista = nuevo;
	}else{
		aux2->sgt = nuevo;
	}
	nuevo-> sgt= aux1;
cout<<"Valor agregado exitosamente\n";
}

void Mostrar(nodo*lista){
	nodo*orden = new nodo();
	orden = lista;
	
	while (orden != NULL){
		cout<<orden->valor<<"->";
		orden =orden ->sgt;
	}
}
