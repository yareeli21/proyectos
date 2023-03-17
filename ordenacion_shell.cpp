//algoritmo de la ordenación Shell

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float &x, float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}
void ordenacionShell(float a[],int n){
	int salto, i, j, k; //j--> para el primer elemento que vamos a comparar y k-->para el segundo elemento a comparar, i-->solo para dar vueltas
	salto = n/2;
	
	while (salto>0){ //mientras sea mayor a 0 se va a poder seguir comparando
		for(i=salto; i<n; i++){
			j = i - salto; //porque empieza desde la posición 0
			while(j>=0){
				k = j + salto; //porque empieza desde j más el salto 
				if(a[j] <= a[k]){//par de elementos están ordenados
					j = -1; //significa que pasa a la siguiente posición
				}
				else{//par de elementos están desordenados
					intercambio(a[j],a[k]);
					j -= salto; //j - salto
				}
			}
		}
		salto = salto/2;
	}
}

int main(){
    float arreglo[] = {4,6,1,9,34,23,12,7,2,14,17};
    
    ordenacionShell(arreglo,11); //le estamos enviando el arreglo a la ordenaciónShell (son 11 elementos)
    
    cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
    for(int i=0; i<11; i++){
    	cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	cout<<"Arreglo Ordenado - Forma Descendente"<<endl;
	for(int i=10; i>=0; i--){
		cout<<arreglo[i]<<" ";
	}
	
	cout<<endl;
	
	
	getch();
	return 0;
}