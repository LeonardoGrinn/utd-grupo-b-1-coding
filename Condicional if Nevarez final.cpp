#include<iostream> //Librería estándar.
using namespace std; //Permite acortar nuestro código de std::cout a cout:

int main () { //Módulo principal.
	
	int firstNumber = 19, secondNumber = 4; //Inicializamos variables.
	
	cout<<"Digita un numero: "; //Asignamos entrada de datos.
	cin>>secondNumber; //Asigna un valor a nuestra variable.
	
	if (firstNumber == secondNumber) { //Evaluamos nuestra condición.
		cout<<"Ambos numeros son iguales "; //Instrucciones 1.
	} else {
		cout<<"Los numeros son distintos "; //Instrucciones 2.
	}
	
	return 0;
	
}
