#include<iostream> //Librer�a est�ndar.
using namespace std; //Permite acortar nuestro c�digo de std::cout a cout:

int main { //M�dulo principal.
	
	int firstNumber = 19, secondNumber; //Inicializamos variables.
	
	cout<<"Digita un n�mero: "; //Asignamos entrada de datos.
	cin>>secondNumber; //Asigna un valor a nuestra variable.
	
	if (firstNumber == secondNumber) { //Evaluamos nuestra condici�n.
		cout<<"Ambos n�meros son iguales "; //Instrucciones 1.
	} else {
		cout<<"Los n�meros son distintos "; //Instrucciones 2.
	}
	
	return 0;
	
}
