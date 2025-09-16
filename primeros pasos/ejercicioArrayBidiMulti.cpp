#include <iostream>
using namespace std;



int main(){
    /*
    Suma de elementos en una matriz 3x3
    Pide al usuario que ingrese los valores de una matriz 3x3 y calcula la suma de todos sus elementos.

int array[3][3];
int suma=0;
for (int i = 0; i < 3; i++)
{
    for (int y = 0; y < 3; y++)
    {
        cin >>array[i][y]; 
    }
    
}
cout<<"Separacion"<<endl;
for (int i = 0; i < 3; i++)
{
    for (int y = 0; y < 3; y++)
    {
            cout <<array[i][y];
            suma=suma+array[i][y];
    }
    cout <<endl;
}
cout<<"La suma total es: "<<suma;
*/




/*
Promedio por fila en una matriz 4x4
Lee una matriz 4x4 y calcula el promedio de cada fila, mostrando los resultados.


int array[4][4];
int suma=0;
int promedio=0;
for (int i = 0; i < 4; i++)
{
    for (int y = 0; y < 4; y++)
    {
        cin >>array[i][y]; 
    }
    
}
cout<<"Separacion"<<endl;
for (int i = 0; i < 4; i++)
{
    for (int y = 0; y < 4; y++)
    {
            cout <<array[i][y];
            suma=suma+array[i][y];
    }
    promedio=suma/4;
    suma=0; 
    cout <<endl;
    cout <<"El promedio es: "<<promedio<<endl;
}
*/


/*
Número máximo en una matriz 5x5
Llena una matriz 5x5 con números ingresados por el usuario y encuentra el número máximo en toda la matriz.


int array[5][5];
int numeroMayor=0;
for (int i = 0; i < 5; i++)
{
    for (int y = 0; y < 5; y++)
    {
        cin >>array[i][y]; 
    }
    
}
cout<<"Separacion"<<endl;
for (int i = 0; i < 4; i++)
{
    for (int y = 0; y < 4; y++)
    {
        cout <<array[i][y];
        
        if (numeroMayor==0)
        {
            numeroMayor=array[i][y];
        }else if(array[i][y]> numeroMayor)
        {
            numeroMayor=array[i][y];
        }
        
    }
    cout <<endl;
}
cout<<"Elnumero mayor es: "<<numeroMayor;
*/










/*
Transponer una matriz 3x3
Lee una matriz 3x3 y muestra su transpuesta (intercambiar filas por columnas).

int array[3][3];
int suma=0;
for (int i = 0; i < 3; i++)
{
    for (int y = 0; y < 3; y++)
    {
        cin >>array[i][y]; 
    }
    
}
cout<<"Separacion1"<<endl;
for (int i = 0; i < 3; i++)
{
    for (int y = 0; y < 3; y++)
    {
            cout <<array[i][y];
    
    }
    cout <<endl;
}




cout<<"Separacion"<<endl;
for (int i = 0; i < 3; i++)
{
    for (int y = 0; y < 3; y++)
    {
            cout <<array[y][i];
    
    }
    cout <<endl;
}

*/







/*
Suma de dos matrices 2x2
Pide al usuario dos matrices 2x2 y muestra la suma de ambas.

int array[2][2];
int array2[2][2];

int sumaArray1=0;
int sumaArray2=0;
int sumaTotal=0;


cout<<"Ingrese valores array uno"<<endl;

for (int i = 0; i < 2; i++)
{
    for (int y = 0; y < 2; y++)
    {
        cin >>array[i][y];
        sumaArray1=sumaArray1+array[i][y]; 
    }
    
}


cout<<"Ingrese valores array dos"<<endl;

for (int i = 0; i < 2; i++)
{
    for (int y = 0; y < 2; y++)
    {
        cin >>array2[i][y]; 
        sumaArray2=sumaArray2+array2[i][y]; 

    }
    
}



sumaTotal=sumaArray1+sumaArray2;
cout<<"La suma total es del primer array es: "<<sumaArray1<<endl;
cout<<"La suma total es del segundo array es: "<<sumaArray2<<endl;
cout<<"La suma total de los arrays es: "<<sumaTotal;


*/




/*
Suma de elementos en un array tridimensional 2x2x2
Pide al usuario que ingrese los valores para un array tridimensional 2x2x2 y calcula la suma de todos sus elementos.

int array[2][2][2];
int suma=0;
for (int i = 0; i < 2; i++)
{
    for (int y = 0; y < 2; y++)
    {
        for (int z = 0; z < 2; z++)
        {
            cin >>array[i][y][z]; 
            suma=suma+array[i][y][z];
                
        }
        
    }
    
}

cout<<"La suma total es: "<<suma;
*/




}