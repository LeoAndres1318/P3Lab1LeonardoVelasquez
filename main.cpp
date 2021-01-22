#include <iostream>
#include <math.h>
using namespace  std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion 0=;
	cout<<"Ingrese Opcion: ";
	cin>>opcion;
	if(opcion ==1){
		cout<<"Ingrese Opcion: ";
		int n =0;
		if(opcion==1){
			cout<<"Ingrese n: ";
			int n=0;
			cin>>n;
			int acum=0;
			for(int i=0; int <=n; i ++){
				acum+=i*pow(i+1,2); 
			}
		}
		cout<< acum;
	}
	return 0;
	
		}
	

