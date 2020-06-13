#include "iostream"
using namespace std;
int bisiesto(int);
int main (void)
{
    int a;
    cout << endl;
    cout << "calculador de año bisiesto." << endl << endl;
    cout << "Escrbia el año: " << endl;
    cin >> a;
    bisiesto(a);
}
int bisiesto(int a)
{
    int b, c;
    b = a%400;
    if( b == 0)
    {
     cout << "El año es bisiesto." << endl;
    }
    else
    {
        c=a%4;
    if (c==0)
    {
       cout << "El año es bisiesto." << endl;
    }
    else
    {
        cout << "El año no es bisiesto." << endl;
    }
    }
}