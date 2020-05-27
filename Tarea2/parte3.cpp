#include "iostream"
using namespace std;

int main(void)
{
    float a;
    cout << endl;
    cout << "Verificador de numeros positivos, negativos y cero \n";
    cout << "Digite un numero ";
    cin >> a;
    if(a>=0)
    {
        if (a == 0)
        {
            cout << "El numero es cero" << endl;
        }
        else
        {
            cout << "El numero es positivo" << endl;
        }
    }
    else
    {
        cout << "El numero es negativo" << endl;
    }
    system("PAUSE");
    return 0;
}