/* 

1.- Condicional If
    if (condición) {
        Instrucciones 1
    }
2.- Condicional If/Else
    if (condición) {
        Instrucciones 1
    } else {
        Instrucciones 2
    }
*/

#include<iostream> //Libreria estandar.
using namespace std; // Permite acortar nuestro codigo de std: :cout a cout;

int main() { //Modulo principal.
int CargaActual= 150,secondNumber;//Incializamos variables.

cout<<"Digita un numero: ";//Asignamos entrada de datos.
cin>>secondNumber;//Asigna un valor a muestra variable.

if (CargaActual == secondNumber ) 
{
    cout<<"El nivel de la carga es suficientes";//Instrucciones 1
} else
{
  cout<<"El nivel de carga insuficientes";//Instrucciones 2
}

return 0;
}