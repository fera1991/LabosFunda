#include "iostream"
using namespace std;
int main(void)
{
    string a;
    cout << endl;
    cout << "Verficador de longitud de una cadena y verificar si es par o impar\n";
    cout << "Digite la palabra ";
    cin >> a;
    if(a.length() > 10) 
    {
        if (a.length()%2 == 0)
        {
        cout << "La cadena es mayor a 10 y es par" << endl;
        }
      else
      {
        cout << "La cadena es mayor a 10 y es impar" << endl;
      }

    }
    else
    {
          if (a.length()%2 == 0)
        {
        cout << "La cadena no es mayor a 10 y es par" << endl;
        }
      else
      {
        cout << "La cadena no es mayor a 10 y es impar" << endl;
      }
    }
    system ("PAUSE");
    return 0;
}