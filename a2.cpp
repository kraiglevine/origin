#include <iostream>
#define max 100
using namespace std;

int main(int argc, char *argv[]) {
	int n,pos,vector[max];
	cout<<"Ingrese # de elementos : ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese en la posicion "<<i<<" ";cin>>vector[i];
	}
	cout<<"Ingrese la posicion del elemento a eliminar: ";cin>>pos;
	for(int i=pos;i<n;i++){
		vector[i]=vector[i+1];
	}
	for(int i=0;i<n-1;i++)
		cout<<"\n"<<vector[i];
	
	return 0;
}
