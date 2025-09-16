#include <iostream>
using namespace std;


int main(){
    int pasoCoches[24][31][12]; //Hora dia y mes
    
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 31; j++)
        {
           for (int y = 0; y < 12; y++)
           {
                pasoCoches [i][j][y]=rand()%1000;
           }
           
        }
        
            
    }
    



    cout << " El numero de coches que pasaron el 7 de novimebre a las 19 am son: "<<pasoCoches[19][10][6];



}