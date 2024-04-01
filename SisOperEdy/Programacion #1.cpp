
#include<iostream>
using namespace std;
main(void){
	//tipos de datos C y C++
	int a; //vairable a
	int b; //variable b
	
	//asignacion de valores
	a=9;
	b=5;
	
	int c; //piwhenpiwnpi
	c=a+b;
	
	//
	
	cout<<"valor de variable a: "<<a<<endl;
	cout<<"valor de variable b: "<<b<<endl;
	cout<<"valor de variable c: "<<c<<endl;
	cout<<"-----------------------------------------"<<endl;
	
	//el operador de "desreferenciacion" nos permite visualizar el 
	//direccion de memoria que ocupa una variable. por ejemplo;:
	cout<<"La direccion de memoria de la varible a es"<<&a<<endl;	
	cout<<"La direccion de memoria de la varible b es"<<&b<<endl;
	cout<<"La direccion de memoria de la varible c es"<<&c<<endl;
	
	return 0;
	
  
    
}

