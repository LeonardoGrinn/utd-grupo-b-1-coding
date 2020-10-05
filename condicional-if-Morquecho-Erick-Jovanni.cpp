#include<iostream> //Librerias base.
using namespace std; //Permite acortar nuestro codigo.
int main(){ //Modulo principal.
int EnergiaNesesaria = 101, EnergiaActual; //Iniacilamos nuestras varaiables.

cout<<"Escribe el numero de energia actual:"; //Aqui solicitamos los datos requeridos.
cin>>EnergiaActual; //Aqui los guardamos en nuestra variable.

if(EnergiaActual >= EnergiaNesesaria){ //Evaluamos la problematica.
    cout<<"ENERGIA SUFICIENTE!!"; //Damos instrucciones de que hacer.

}
else{
    cout<<"ENERGIA INSUFICIENTE!!!!!"; //Damos la segunda  instruccion si es que la anterior no se cumplio.
}

return 0;

}