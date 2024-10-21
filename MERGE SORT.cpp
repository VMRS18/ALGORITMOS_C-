#include<iostream>
using namespace std;
int main(int args, char** argv){
	//MERGE SORT
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
	
	
	for(int m=1;m<N;m*=2){
		for(int Iizq=0;Iizq<N;Iizq+=2*m){
			int medio=min(Iizq+m,N);
			int Fder=min(Iizq+2*m,N);
			
			int tam_izq=medio-Iizq;
			int tam_der=Fder-medio;
			
			//Creamos sub Arrays temporales
			int IZQ[tam_izq];int DER[tam_der];
			
			
			//Copiamos los valores a los nuevos sub arrays
			for(int i=0;i<tam_izq;i++){
				IZQ[i]=Array[Iizq+i];
			}
			for(int j=0;j<tam_der;j++){
				DER[j]=Array[medio+j];
			}
			
			int i=0;int j=0;int k=Iizq;
			
			
			//Combina las sub listas
			while(i<tam_izq && j<tam_der){
				if(IZQ[i]<=DER[j]){
					Array[k]=IZQ[i];
					i++;
				}else{
					Array[k]=DER[j];
					j++;
				}
				k++;
			}
			
			
			//Terminamos de copiar los datos q faltan
			while(i<tam_izq){
				Array[k]=IZQ[i];
				i++;
				k++;
			}
			while(j<tam_der){
				Array[k]=DER[j];
				j++;
				k++;
			}
		}
	}
	
	cout<<"\nEl Array ordenado es: \n";
		for(int i=0;i<N;i++){
			cout<<Array[i]<<" ";
		}
}