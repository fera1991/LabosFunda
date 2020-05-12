#include "iostream"
#include "cmath"
using namespace std;

int main(void)
{
    double a, b, c;

    cout << "Escribe la variable a" << endl;
    cin >> a;
    cout << "Escribe la variable b" << endl;
    cin >> b;
    cout << "Escribe la variable c" << endl;
    cin >> c;
    double raizp1 = (b*b) - 4*a*c; 
    double raizp2 = sqrt(raizp1);
    double resultado1 = (-(b)+(raizp2))/ (2*a);
    double resultado2 = (-(b)-(raizp2))/ (2*a);
    cout << "resultado positivo = " << resultado1 << endl << "resultado negativo = "<< resultado2;
    char g;
    cin >> g;
}
