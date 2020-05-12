#include "iostream"
using namespace std;

int main()
{
    float a, b, c;
    cout << "escriba el valor de nota 1" << endl;
    cin >> a;
    cout << "escriba el valor de nota 1" << endl;
    cin >> b;
    cout << "escriba el valor de nota 1" << endl;
    cin >> c;
    float promedio = (a+b+c)/3;
    cout << "resultado de promedio de las notas = " << promedio;
    cout << "\n presione enter para cerrar ";

    cin.get();
    cin.get();
    return 0;


}