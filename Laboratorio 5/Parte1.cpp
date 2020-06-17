#include "iostream"
using namespace std;
int funcionmcd (int,int);
int main(void)
{
    int mayor,menor;
    cout << "Programa para sacar el MDC de dos varibles enteras."<< endl << endl;
    cout << "digite la varible menor: " << endl;
    cin >> menor;
    cout << "digite la varible mayor: " << endl;
    cin >> mayor;
    funcionmcd(mayor,menor);
}

int funcionmcd (int mayor, int menor)
{
    int residuo;
    do
    {
        residuo = mayor % menor;
        if (residuo != 0)
        {
            mayor = menor;
            menor = residuo;
        }
        
        
    } while (residuo != 0);
    cout << "El MCD de las dos variables es: " << menor << endl;
    return 0;
}
 