#include <iostream>
/*Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
billetes de $100.
*/
using namespace std;

int main()
{
    int mil,qui,dos,cie,valor;
    cout << "Ingrese un monto: ";
    cin >> valor;
    mil = valor / 1000;
    qui = (valor % 1000)/500;
    dos = ((valor % 1000)%500)/200;
    cie = (((valor % 1000)%500)%200)/100;
    cout << "Billetes de mil: "<<mil<<endl;
    cout << "Billetes de quinientos: "<<qui<<endl;
    cout << "Billetes de doscientos: "<<dos<<endl;
    cout << "Billetes de cien: "<<cie<<endl;
    return 0;
}
