#include<iostream> //Librer�a est�ndar.
using namespace std; //Permite acortar nuestro c�digo de std::cout a cout:

int main () { //M�dulo principal.
	
	int firstNumber = 19, secondNumber = 4; //Inicializamos variables.
	
	cout<<"Digita un numero: "; //Asignamos entrada de datos.
	cin>>secondNumber; //Asigna un valor a nuestra variable.
	
	if (firstNumber == secondNumber) { //Evaluamos nuestra condici�n.
		cout<<"Ambos numeros son iguales "; //Instrucciones 1.
	} else {
		cout<<"Los numeros son distintos "; //Instrucciones 2.
	}
	
	return 0;
	
}
