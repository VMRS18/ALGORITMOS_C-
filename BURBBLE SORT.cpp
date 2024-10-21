#include<iostream>
using namespace std;
int main(int args, char** argv){
	//BURBBLE SORT
	int N, n;
	cout<<"Ingrese la cantidad de elementos del Array: ";cin>>N;
	int Array[N];
	for(int i=0;i<N;i++){
		cout<<"Ingrese el valor "<<(i+1)<<": ";cin>>n;Array[i]=n;
	}
	cout<<"El Array original es: \n";
	for(int i=0;i<N;i++){
		cout<<Array[i]<<" ";
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(Array[j]>Array[j+1]){
				swap(Array[j],Array[j+1]);
			}
		}
	}
	cout<<"\nEl Array ordenado es: \n";
	for(int i=0;i<N;i++){
		cout<<Array[i]<<" ";
	}
}