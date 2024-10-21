#include<iostream>
using namespace std;
int main(int args,char** argv){
	//COUNTING SORT
	int N,n;
	cout<<"Ingrese la cantidad de elementos del Array: ";cin>>N;
	int Array[N];
	for(int i=0;i<N;i++){
		cout<<"Ingrese el valor "<<(i+1)<<": ";cin>>n;Array[i]=n;
	}
	cout<<"El Array original es: \n";
	for(int i=0;i<N;i++){
		cout<<Array[i]<<" ";
	}
	
	
	//Buscar el valor mayor del array original
	int MAX=Array[0];
	for(int i=0;i<N;i++){
		if(Array[i]>MAX){
			MAX=Array[i];
		}
	}
	//fin
	
	
	int ArrNuevo[N];
	int cont[MAX+1];
	int num,indice;
	
	for(int i=0;i<MAX;i++){
		cont[i]=0;
	}
	
	
	//Contar numero de repeticiones en el Array
	for(int i=0;i<N;i++){
		num=Array[i];
		cont[num]++;
	}
	//fin
	
	
	//Hacemos la suma acumulativa
	for(int i=1;i<=MAX;i++){
		cont[i]+=cont[i-1];
	}
	//fin
	
	
	//Ordenamos p xd
	for(int i=0;i<N;i++){
		num=Array[i];
		indice=cont[num];
		ArrNuevo[indice-1]=num;
		cont[num]--;
	}
	//fin
	
	
	for(int i=0;i<N;i++){
		Array[i]=ArrNuevo[i];
	}
	
	
	cout<<"\nEl Array ordenado es: \n";
	for(int i=0;i<N;i++){
		cout<<Array[i]<<" ";
	}
}