#include "iostream"
using namespace std;

const double pi = 3.14159265359;

int main (void)
{
    float a;
    //double b = 3.14159265359;
    
    cout << "Escribe el radio del circulo" << endl;
    cin >> a;

    double area = pi*(a*a);
    cout << "El area del ciruclo es = " << area << endl;
    double p = 2*pi*a;
    cout << "El perimetro del radio es = "<< p;
    char g;
    cin >> g;

}