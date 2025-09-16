#include <iostream>

using  namespace std; 

int main() {
  int miMatriz [4] [5];

    for (int fila = 0; fila < 4; fila++)
    {
            for (int columna = 0; columna < 5; columna++)
            {
                
                cin >> miMatriz[fila][columna];

            }
            
    }
    

cout << "Visualizamos ahora los valores almacenados en el array"<<endl;





    for (int fila = 0; fila < 4; fila++)
    {
            for (int columna = 0; columna < 5; columna++)
            {
                
                cout << miMatriz[fila][columna];

            }
           cout << endl; 
    }
    










}