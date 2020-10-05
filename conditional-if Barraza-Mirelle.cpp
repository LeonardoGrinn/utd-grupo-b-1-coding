/*

if (condicion) {
instrucciones 1
} else {
instrucciones 2
}

*/

#include<iostream> //Libreria estandar.
using namespace std; //Permite acortar nuestro codigo de std;:cout a cout;

int main() { // modulo principal.

int firstNumber =30, secondNumber;//Iniciamos variables.

cout<<"Digita un numero: ";//asignamos entrada de datos.
cin>>secondNumber;//Asigna un valor a nuestra variable.

if (firstNumber == secondNumber) {
    cout<<"Ambos numeros son iguales";// Instrucciones 1
} else {
cout<<"Los numeros son distintos";//Instrucciones 2
}

return 0;

}
