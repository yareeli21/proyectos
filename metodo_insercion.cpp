//Ordenamiento por inserción

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]= {3,2,5,1,4};
	int i, pos, aux; //i=iterador, pos=posición, aux=para hacer el cambio de los números
	
	for(i=0; i<5; i++){
		pos = i;
		aux = numeros[i];
		
		
		while((pos>0) && (numeros[pos-1] > aux)){ //numeroIzq > numeroAct
			numeros[pos] = numeros[pos-1]; //cambio (que viene siendo que el actual se iguala con el de la izquierda, o sea que el actual tomará su posición)
			pos--; //porque la posición iba disminuyendo poque ibamos comprobando si el número a la izquierda era mayor al actual
		}
		numeros[pos] = aux; //para ir refrescando en qué bucle vamos
	}
	
	cout<<"Orden ascendente:";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"Orden descendente:";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
	
	system("pause");
	return 0;
}