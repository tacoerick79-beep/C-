#include <iostream>
#include <vector>
using namespace std;

/*
int main(){
    vector <int> records {45,25,115,24};
    vector <char> letras (10);
    vector <double> salarioBase(350,2015.50);
    records.push_back(150);
    for (int i = 0; i < records.size(); i++)
    {
        cout<<"En consola: "<<records[i]<<endl;
    }
}
*/

int main()
{
    int tamanioVector;
   

    cout << "De que tamaño es el vector?" << endl;
    cin >> tamanioVector;
     vector<int> records(tamanioVector);
    for (int i = 0; i < records.size(); i++)
    {
        cin >> records[i];
    }

    cout << "Mostrando resultado"<<endl;
    int j = 0;
    while (j < records.size())
    {
        cout << "El valor la posicion " << j << " :" << records[j]<<endl;
        j++;
    }

    string Respuesta;

    cout << "Desea ingresar mas numeros si/no"<<endl;
    cin >> Respuesta;

    if (Respuesta == "si")
    {
        int numeroDos;
        int numeroTres;
        cout << "cuantos valores mas al vector" << endl;
        cin >> numeroDos;
        for (int c= 0; c < numeroDos; c++)
        {
            cin >> numeroTres;
            records.push_back(numeroTres);
        }
    }
    else if (Respuesta == "no")
    {
        cout << "Gracias"<<endl;
    }

    cout << "Mostrando resultado"<<endl;
    for (int a = 0; a < records.size(); a++)
    {
         cout << "El valor la posicion " << a << " :" << records[a]<<endl;
    }
    
}