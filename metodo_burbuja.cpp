//MÉTODO BURBUJA

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]= {4,1,2,5,3};
	int i, j, aux; //iteradores
	
	for(i=0;i<5;i++){ //estas letras son iteradores para evitar poner (for(int i....)) pusimos desde antes las variables
		for(j=0;j<5;j++){
			if(numeros[j]>numeros[j+1]){ //aquí se está haciendo el númeroActual>numeroSiguiente = cambio
				aux=numeros[j]; // la j habla de los números actuales
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux; //esto significa que así es como se interpreta el cambio (el cambio es pasar una posición adelante el número)
			}// j+1 significa el número más uno más, es decir, el siguiente
		}
	}
	
	cout<<"Orden ascendente: ";
	for(i=0; i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
