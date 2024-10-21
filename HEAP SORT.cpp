#include<iostream>
using namespace std;
int main(int args, char** argv){
	//HEAP SORT
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
	
	for(int i=N/2-1;i>=0;i--){
		int padre=i;
		int hizq=2*i+1;
		int hder=2*i+2;
		
		//Comprobamos que el nodo padre es mayor q sus hijos, si no es asi, se cambian los valores
		if(hizq<N && Array[hizq]>Array[padre]){
			padre=hizq;
		}
		if(hder<N && Array[hder]>Array[padre]){
			padre=hder;
		}
		//Si el padre es menor a alguno de ellos tenemos q usar un While para cambiar esos datos
		if(padre!=i){
			swap(Array[i],Array[padre]);
			
			int j=padre;
			while(true){
				int padre=j;
				int hizq=2*j+1;
				int hder=2*j+2;
				
				if(hizq<N && Array[hizq]>Array[padre]){
					padre=hizq;
				}
				if(hder<N && Array[hder]>Array[padre]){
					padre=hder;
				}
				if(padre==j){
					break;
				}
				swap(Array[j],Array[padre]);
				j=padre;
			}
		}
	}
	
	//Re ordenamos
	for(int i=N-1;i>=0;i--){
		//Como ya sabemos q el primer elemnto del Array (padre) es mayor, lo movemos al final y reducimos el array para ya no trabajar con él
		swap(Array[0],Array[i]);
		int j=0;
		int heap_size=i;
		
		while(true){
			int padre=j;
			int hizq=2*j+1;
			int hder=2*j+2;
			
			if(hizq<heap_size && Array[hizq]>Array[padre]){
				padre=hizq;
			}
			if(hder<heap_size && Array[hder]>Array[padre]){
				padre=hder;
			}
			if(padre==j){
				break;
			}
			swap(Array[j],Array[padre]);
			j=padre;
		}
		
	}
	cout<<"\nEl Array ordenado es: \n";
		for(int i=0;i<N;i++){
			cout<<Array[i]<<" ";
		}
	
}