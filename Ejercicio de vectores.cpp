#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int numeros[1000];
	int n=0,cant=1,aux=0,total=0;
	
	cout<<"Ingrese la cantidad de nuemeros que va a digitar"<<endl
	;
	cin>>n;
	
	for(int i=0; i<n;i++){
		cout<<"Ingrese el "<<i+1<<" numero"<<endl;
		cin>>numeros[i];
	}
	
	for(int i=0; i<n; i++){
		cant=1;
		for(int j=0; j<n-1; j++){
			
			if(numeros[i]==numeros[j]){
				
				cant++;
			}
						
			if(cant>aux){
				
				aux=cant;
				total=numeros[i];
			}
		}
	}
	
	cout<<"el numero que mas se repite es:  "<<total<<" con "<<aux<<" veces";
	return 0;
}
