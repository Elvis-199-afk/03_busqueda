#include<iostream>
using namespace std;

int secuencialDes(int,int[],int);
int secuencialOrd(int,int[],int);

int main(){
	int n, a[50],dato,op,pos;
	cout<<"Ingrese cuantos datos va a ingresar: ";
	cin>>n;
	cout<<"\nIngrese los datos: \n";
	for(int i=0;i<n;i++){
		cout<<i+1<<". ";
		cin>>a[i];
	}
	
	cout<<"\nIngrese el dato a buscar: ";
	cin>>dato;
	
	do{
		
		cout<<"\n\n==== METODOS DE BUSQUEDA ====\n\n";
		cout<<" 1. Cuando el arreglo este desordenado\n";
		cout<<" 2. Cuando el arreglo este ordenado\n";
		cout<<" 0.SALIR\n\n";
		cout<<"Seleccione una de las siguietes opciones: ";
		cin>>op;
		
		switch(op){
			case 1:
				pos=secuencialDes(n,a,dato);
				if(pos==0){
					cout<<"No se encontro el dato\n\n";
				}else{
					cout<<"El dato es "<<a[pos]<<" y esta en la posicion "<<pos+1<<endl<<endl;
				}
				system("pause");
				cout<<"\n\n";
				break;
			case 2:
				
				pos=secuencialOrd(n,a,dato);
				if(pos<0){
					cout<<"No se encontro el dato\n\n";
				}else{
					cout<<"El dato es "<<a[pos]<<" y esta en la posicion "<<pos+1<<endl<<endl;
				}
				system("pause");
					cout<<"\n\n";
				break;
			case 0:
				cout<<"Saliendo . . . \n";
		}
			
	}while(op!=0);
	
}
	
int secuencialDes(int n,int a[],int dato){
	int pos=0;
	int i=0;
	while(i<n&&a[i]!=dato){
		i++;
	}
	if(i<n){
		pos=i;
	}
	return pos;
}
int secuencialOrd(int n,int a[],int dato){
	int i=0;
	int pos;
	while(i<n&&a[i]!=dato){
		i++;
	}
	if(i>n||a[i]>dato){
		pos=-i;
	}else{
		pos=i;
	}
	return pos;
}