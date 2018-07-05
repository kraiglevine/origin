#include <iostream>
#define max 100
using namespace std;
int main(int argc, char *argv[]) {
	int n,num,v[max],busca=0;
	cout<<"Ingrese # de elemntos: ";cin>>n;
	for(int i=0; i<n;i++){
		cout<<"Ingrese en la posicion "<<i<<" ";cin>>v[i];
	}
	cout<<"Ingrese el elemento a buscar: ";cin>>num;
	for(int i=0;i<n;i++){
		if(v[i]==num)busca=1;
	}
	if(busca==1)cout<<"Numero encontrado";
	else cout<<"Numero no encontrado";
	return 0;
}

