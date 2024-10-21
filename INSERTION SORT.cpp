#include<iostream>
using namespace std;
int main(int args, char** argv){
	//INSERTION SORT
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
	
	
	
	for (int i=1;i<N;i++) {
        int actual=Array[i];
        int j=i-1;
        
        while (j>=0 && Array[j]>actual) {
            Array[j+1]=Array[j];
            j--;
        }
        Array[j+1]=actual;
    }
    
    
	cout<<"\nEl Array ordenado es: \n";
		for(int i=0;i<N;i++){
			cout<<Array[i]<<" ";
		}
}