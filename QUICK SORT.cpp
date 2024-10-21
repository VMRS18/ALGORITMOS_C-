#include<iostream>
using namespace std;
int main(int args, char** argv){
	//QUICK SORT
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
	
	
	int stack[N];
	int top=-1;
	
	
	//Almacenamos el rango inicial
	stack[++top]=0;
	stack[++top]=N-1;
	
	while(top>=0){
		
		int alto=stack[top--];
		int bajo=stack[top--];
		
		int pivote=Array[alto];
		int i=bajo-1;
		
		
		
		//Partimos el Array
		for(int j=bajo;j<alto;j++){
			if(Array[j]<=pivote){
				i++;
				swap(Array[i],Array[j]);
			}
		}
		
		swap(Array[i+1],Array[alto]);
		int Lugarpivote=i+1;
		
		if(Lugarpivote-1>bajo){
			stack[++top]=bajo;
			stack[++top]=Lugarpivote-1;
		}
		if(Lugarpivote+1<alto){
			stack[++top]=Lugarpivote+1;
			stack[++top]=alto;
		}
		
	}
	
	cout<<"\nEl Array ordenado es: \n";
		for(int i=0;i<N;i++){
			cout<<Array[i]<<" ";
		}
}