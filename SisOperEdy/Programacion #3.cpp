#include<iostream>
using namespace std;

//---------Punteros ------- //

main(void){
	
	//declaramos un variable normal denominada "x" de tipo entero
	int x;
	x=8;
	
	int *ptr;
	
	ptr=&x;
	
	cout<<"La direccion de X es: " <<&x;
	cout<<endl;
	cout<<"El valor del puntero es: " <<ptr;
	cout<<endl;
	cout<<"La direccion de puntero ptr es: " <<&ptr;	
} 




