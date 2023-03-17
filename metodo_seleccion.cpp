//Ordenamiento por selección

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={3,2,1,5,4};
	int i, j, aux, min;
	
	for(i=0;i<5;i++){//este bucle recorrerá todo el arreglo
		min= i;//esto supone que el de la posición 0 es el número mínimo
		for(j=i+1;j<5;j++){//se recorrerá el  arreglo  más a fondo i+1 significa que es el siguiente al primero, en este caso sería el 2, desde ahí empiezan para j
			if (numeros[j]<numeros[min]){
				min=j; //quiere decir que si el 2 es menor que 3, ahora el mínimo será el 2 y así se hará con los siguientes hasta encontar el menor
			} 
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
	
	cout<<"Orden Ascendnete: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"Orden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";
	
	getch();
	return 0;
}