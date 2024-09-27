#include<iostream>
using namespace std;

struct pol{
	int exp;
	int coef;
};


int main(){
	pol a[20]={{5,2},{4,6},{3,7},{2,9},{1,9}};
	int m,e,pos,cen=0;
	cout<<"Ingrese el coeficiente de su monomio a encotrar: ";
	cin>>m;
	cout<<"Ingrese el exponente de su monomio: ";
	cin>>e;
	
	for(int i=0;i<5;i++){
		if(a[i].exp==e&&a[i].coef==m){
			pos=i;
			cen=1;
			
		}
	}
	
	if(cen==1){
		cout<<"\nEl monomio si forma parte del polinomio\n";
		for(int i=0;i<5;i++){
			if(i!=4){
				cout<<a[i].coef<<"x^"<<a[i].exp<<" +\t";

			}else{
				cout<<a[i].coef<<"x^"<<a[i].exp<<endl;
			}
		}
	}else{
		cout<<"\nEl monomio no forma parte del polinomio";
	}
	
	return 0;
}