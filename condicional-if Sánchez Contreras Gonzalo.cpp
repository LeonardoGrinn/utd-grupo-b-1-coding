#include<iostream> //Libreria estandar
using namespace std; //permite acortar nuestro codigo de std::cout a cout

int main() //modulo principal
{
	int acceptableVoltage = 750, receivedVoltage; //variables
	
	cout<<"Cual es el voltaje? "; //preguntamos sobre el volyaje
	cin>> receivedVoltage; //asignar un valor a la variable
	
	if (receivedVoltage < acceptableVoltage) //preguntamos si el voltaje recibido es suficiente
	{
		cout<<"El voltaje no es suficiente "; //si no es suficiente se imprime el texto
	}
	else(receivedVoltage>= acceptableVoltage);
	{
		cout<<"El voltaje es sufuciente " ; //si el voltaje es aceptable se imprime el texto
	}

return 0;
}