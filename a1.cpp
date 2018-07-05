#include <iostream>
#define max 100
using namespace std;

int main(int argc, char *argv[]) {
	int n,pos,num,vector[max];
	cout<<"Ingrese # de elementos : ";cin>>n;
	for(int i=0;i<n;i++){
	cout<<"Ingrese en la posicion "<<i<<" ";cin>>vector[i];
	}
	do{
	cout<<"Ingrese la posicion que va insertar el numero: ";cin>>pos;
	if(pos>n || pos<0)cout<<"\nPosicion incorrecta, intente otra vez\n";
	}while(pos>n || pos<0);
	cout<<"Ingrese numero: ";cin>>num;
	for(int i=n;i>pos;i--){
		vector[i]=vector[i-1];
	}
	vector[pos]=num;
	for(int i=0;i<=n;i++)
		cout<<"\n"<<vector[i];
	
	return 0;
}

