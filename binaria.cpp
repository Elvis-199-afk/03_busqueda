#include<iostream>
using namespace std;

int main(){
	int n, a[50],dato,izq=0,der=n-1,cen=0,m,pos;
	cout<<"Ingrese cuantos datos va a ingresar: ";
	cin>>n;
	cout<<"\nIngrese los datos: \n";
	for(int i=0;i<n;i++){
		cout<<i+1<<". ";
		cin>>a[i];
	}
	cout<<"\nIngrese el dato a buscar: ";
	cin>>dato;
	
	while(izq<der&&cen==0){
		m=(izq+der)/2;
		if(a[m]==dato){
			cen=1;
		}else{
			if(dato>a[m]){
				izq=m+1;
			}else{
				der=m-1;
			}
		}
	}
	if(cen==1){
		pos=m;
	}else{
		pos=-izq;
	}
	
	if(pos<0){
		cout<<"No se encontro el dato";
	}else{
		cout<<"El dato esta esta en la posicion "<<pos<<endl;
	}
}