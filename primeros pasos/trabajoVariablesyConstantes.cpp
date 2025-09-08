#include <iostream>
using namespace std;

int main() {

   const string nombre="Erick";

   int edad{21};

   double salario;

    cout << "Introduce el salario del empleado: ";

    cin >> salario;
    
    cout << "Introduce la edad del empleado: ";

    cin >> edad;

    cout << "---------------*----------------" <<endl;

    cout << "Datos del empleado: " <<endl;

    cout <<"Nombre: "<<nombre << " .Edad: " <<edad << " .Salario: "<<salario;

}