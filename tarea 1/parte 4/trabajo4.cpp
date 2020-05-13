#include "iostream"
#include "string"
using namespace std;

int main()
{
    string producto;
    float precio;
    float total;
    int cantidad;
    cout << "ingrese el nombre del producto: ";
    cin >> producto;
    cout << "ingrese el precio del prodructo: ";
    cin >> precio;
    cout << "ingrese la cantidad a comprar: ";
    cin >> cantidad;
    total = precio*cantidad;
    cout << "su producto: " << producto << "\ncantidad: " << cantidad << "\nprecio del producto: "<< precio;
    cout << "\nel total de su compra es: " << total << " Dolares"; 

    cin.get();
    cin.get();
    return 0;
    
}
