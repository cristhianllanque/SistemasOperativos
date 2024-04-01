#include<iostream>
using namespace std;

//Este programa muestra la iteracion atra vez de la consola
//para solicitar lo numeros y mostrar los resultados de los 4 amtttt

int main() {
    int num1, num2, suma, resta, multiplicacion;
    float division;

    cout << "Ingrese un número: ";
    cin >> num1;

    cout << "Ingrese otro número: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = static_cast<float>(num1) / num2;

    cout << "La suma del resultado es: " << suma << endl;
    cout << "La resta del resultado es: " << resta << endl;
    cout << "La multiplicación del resultado es: " << multiplicacion << endl;
    cout << "La división del resultado es: " << division << endl;

    return 0;
}


