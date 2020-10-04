#include<iostream> //Librería estándar.
using namespace std; //Permite acortar nuestro código de std::cout a cout:

int main { //Módulo principal.
	
	int firstNumber = 19, secondNumber; //Inicializamos variables.
	
	cout<<"Digita un número: "; //Asignamos entrada de datos.
	cin>>secondNumber; //Asigna un valor a nuestra variable.
	
	if (firstNumber == secondNumber) { //Evaluamos nuestra condición.
		cout<<"Ambos números son iguales "; //Instrucciones 1.
	} else {
		cout<<"Los números son distintos "; //Instrucciones 2.
	}
	
	return 0;
	
}
