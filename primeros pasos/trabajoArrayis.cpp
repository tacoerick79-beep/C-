#include <iostream>
 using namespace std;

 int main() {
 /*
Suma de elementos
 Crea un programa que pida al usuario 5 números enteros, 
 los almacene en un array y luego calcule y muestre la suma de todos los elementos.
 */


/*
 int numerosEnteros=5;
 
 int matrizNumeros[numerosEnteros];

 int suma=0; 


 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;

    cin >> matrizNumeros[i];

    suma=suma+matrizNumeros[i];


 }
 
 cout <<"La suma es: "<<suma;



*/





/*
Promedio de un array
Pide al usuario 10 números, guárdalos en un array y calcula el promedio de esos números.

*/
/*
 int numerosEnteros=10;
 
 int matrizNumeros[numerosEnteros];

 int suma=0; 

double promedio = 0;
 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;

    cin >> matrizNumeros[i];

    suma=suma+matrizNumeros[i];


 }

 promedio=suma/numerosEnteros;
 cout <<"La promedio es: "<<promedio;
*/






/*
Número máximo y mínimo
Lee 8 números enteros en un array y determina cuál es el número máximo y cuál es el mínimo.

*/
/*
 int numerosEnteros=8;
 int matrizNumeros[numerosEnteros];
 int numeroMayor=0; 
 int numeroMenor=0;
 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;
    cin >> matrizNumeros[i];
    if(matrizNumeros[i]> numeroMayor){
        numeroMayor=matrizNumeros[i];
    }
    

    if(numeroMenor==0){
        numeroMenor=matrizNumeros[i];
    }else if(matrizNumeros[i]<numeroMenor){
         numeroMenor=matrizNumeros[i];
    }

 }

 cout <<"La numero mayor es: "<<numeroMayor<<endl ;
 cout <<"La numero menor es: "<<numeroMenor<<endl ;
*/





/*
Invertir un array
Pide al usuario 6 números, guárdalos en un array y luego muestra el array en orden inverso.
*/

/*
 int numerosEnteros=6;
 int matrizNumeros[numerosEnteros];

 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;
    cin >> matrizNumeros[i];
 }
  int y=numerosEnteros;
 for (size_t i = 0; i < numerosEnteros; i++)
 {
   
    y--;
    cout << matrizNumeros[y]<<endl;


 }
*/





/*
Contar números pares
Lee 10 números enteros en un array y cuenta cuántos de ellos son pares.

*/


/*
 int numerosEnteros=10;
 int matrizNumeros[numerosEnteros];
 int par=0; 

 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;
    cin >> matrizNumeros[i];
    if(matrizNumeros[i] % 2==0){
        par=par+1;
    }
    

 

 }

 cout <<"El total de numeros pares es: "<<par<<endl;
*/



































/*
Buscar un número
Pide al usuario 7 números y luego un número a buscar. Indica si el número está en el array o no.

*/




 int numerosEnteros=7;
 int matrizNumeros[numerosEnteros];
 int numeroBsucar=0; 

 for (size_t i = 0; i < numerosEnteros; i++)
 {
    cout<< "Ingrese el valor de la posicion "<<i<<endl;
    cin >> matrizNumeros[i];
 }

 cout <<"El numero ha buscar es: "<<endl;
 cin>> numeroBsucar;



  for (size_t i = 0; i < numerosEnteros; i++)
 {
    if(matrizNumeros[i]==numeroBsucar){
    cout<<"Correcto numero encontrado";
    break;
    }
 }
   








 }