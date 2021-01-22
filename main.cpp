#include <iostream>
#include <math.h>
using namespace  std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion 0=;
	cout<<"Ingrese Opcion 1 o 2: ";
	cin>>opcion;
	if(opcion ==1){
	cout<<"Ingrese Opcion: ";
		int n =0;
		if(opcion==1){
			cout<<"Ejercicio 1";
			cout<<"Ingrese n: ";
			int n=0;
			cin>>n;
			int acum=0;
			for(int i=0; int <=n; i ++){
				acum+=i*pow(i+1,2);
				cout<< acum; 
			}
		}if(opcion==2){
	        cout<<"Ejercicio 2";
	        cout<<"Ingrese n: ";
	        float x=0;
	        cin>>x;
	        float acumulador=0;
	        acumulador+=1/(1+exp(x));
	        cout<<"Resultado: " <<acum<<endl;		
}
		
	        
	}
	return 0;
	
		}
	

