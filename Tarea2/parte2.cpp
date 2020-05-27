#include "iostream"
using namespace std;

int main (void)
{
    int a;
    cout <<  endl;
    cout << "verficador de numero par o impar" << endl;
    cout << endl;
    cout << "Digite el numero a evaluar: " << endl;
    cin >> a;
    if(a%2 == 0 )
    {
        cout << "El numero " << a << " es par" << endl;
    }
    else
    {
        cout << "El numero " << a << " es impar" << endl;
    }
    system("PAUSE");
    return 0;
    

}