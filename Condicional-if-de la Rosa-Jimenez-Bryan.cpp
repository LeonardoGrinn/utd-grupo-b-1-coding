
/*

if (condicion)  {
    Instrucciones 1
} else { 
    Instrucciones 2
}

*/

#include<iostream> //Libreria estandar.
using namespace std; // Permite acortar nuestro codigo de std: :cout a cout;

int main() { //Modulo principal.

int CargaActual= 200,secondNumber;//Incializamos variables.

cout<<"Digita un numero: ";//Asignamos entrada de datos.
cin>>secondNumber;//Asigna un valor a muestra variable.

if (CargaActual == secondNumber ) {
    cout<<"Los niveles de carga son suficientes";//Instrucciones 1
} else {
  cout<<"Los niveles de carga NO son suficientes";//Instrucciones 2
}



return 0;
}

