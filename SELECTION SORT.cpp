#include<iostream>
using namespace std;
int main(int argc, char** argv){
	//SELECTION SORT
	int N,n;
	cout<<"Ingrese la cantidad de elementos del Array: ";cin>>N;
	int Array[N];
	for(int i=0;i<N;i++){
		cout<<"Ingrese el valor "<<(i+1)<<": ";cin>>n;Array[i]=n;
	}
	cout<<"El Array original es: \n";
	for(int i=0;i<N;i++){
		cout<<Array[i]<<" ";
	}cout<<"\n";
	
	
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(Array[i]>Array[j]){
				swap(Array[i],Array[j]);
			}
		}
	}
	
	cout<<"\nEl Array ordenado es: \n";
		for(int i=0;i<N;i++){
			cout<<Array[i]<<" ";
		}
}