#include "iostream"
using namespace std;

int main(void)
{
    int a, b, c;
    cout << endl;
    cout << "Verficador de numeros divisibles. \n";
    cout << "escriba dos numeros: ";
    cin >> a;
    cin >> b;
    c = a%b;
    if(c == 0)
    {
        cout << "Los numeros son divisibles" << endl;
    }
    else
    {
        cout << "Los numeros no son divisibles" << endl;
    }
    system("PAUSE");
    return 0;
}