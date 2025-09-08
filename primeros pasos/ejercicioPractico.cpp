#include <iostream>
using namespace std;

int main() {
    //constante
    const double calidadMedia =35.5;
    const double calidadAlta =55.3;
    const double iva =0.12;
    const int diasExpiracion=30;
    //variables
    double metroMedia;
    double metroAlta;


    cout << "\nCuántos metros quieres instalar con calidad media?: "<<endl;

    cin >> metroMedia;

    
   cout << "\nCuántos metros quieres instalar con calidad Alta?: "<<endl;

   cin >> metroAlta; 


   cout <<"\nPresupuesto para la instalacion de la tarima flotante"<<endl;

   cout <<"Número de metros de calidad media: "<< metroMedia <<endl;

   cout <<"Número de metros de calidad alta: "<< metroAlta <<endl;

   cout <<"Precio de tarima  calidad media: "<< calidadMedia <<endl;

   cout <<"Precio de tarima  calidad alta: "<< calidadAlta <<endl;

   cout <<"IMPORTE: ";

   cout <<(calidadAlta*metroAlta)+(calidadMedia*metroMedia)<< " $."<<endl;

   cout <<"IVA: "<<(calidadAlta*metroAlta)+(calidadMedia*metroMedia)*iva <<" $"<<endl;

   cout << "================="<<endl;

   cout <<"Importe total: ";

   cout <<(calidadAlta*metroAlta)+(calidadMedia*metroMedia)+(calidadAlta*metroAlta)+(calidadMedia*metroMedia)*iva <<" $";

   cout << "Presupuesto valido durante "<< diasExpiracion <<"dias"<<endl;








}