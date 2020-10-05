#include<iostream>
using namespace std; //*aqui insertamos las librerias

int main(){  //Modulo Principal, ponemos un int para poner valores de tipo entero

int firstNumber=120, secondNumber; //aqui le damos valor al int con las variables a la segunda no le damos valor porque se va a usar como un numer en "x"

cout<<"Inserta un voltaje: ";//pedimos que inserte un texto al momento de correr el programa
cin>>secondNumber;//asignamos el dato de entrada a la variable number. 



if (firstNumber == secondNumber){            //si el valor de ambas variables son iguales 
cout<<"Se cumple con el voltaje exacto.";    //se cumple con que el valor de los 2 son iguales
 

}



if (firstNumber < secondNumber){             //si el valor de firstNumber es menor a secondNumber
cout<<"el voltaje es mayor, lo cual no se cumple con el voltaje. ";  // se cumple con que el valor de secondNumber es mayor a firstNumber
 


}

if (firstNumber > secondNumber){            //si el valor de firstNumber es mayor a secondNumber
cout<<"el voltaje es menor, lo cual no se cumple con el voltaje. "; // se cumple con que el valor de secondNumber es menor a firstNumber




}

if (firstNumber == 0){                 //si el valor de firstNumber es igual a 0
cout<<"el valor del voltaje es 0, no hay voltaje. ";  //no hay valor de voltaje
 

}else{
cout<<" Fin del comunicado "; //este es un else general para todos lo if sirve como confirmacion del dato dado
   }
    
return 0;
}
