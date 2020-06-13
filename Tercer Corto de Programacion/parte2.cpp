#include "iostream"
int numero(int);
using namespace std;


int main (void)
{
    int n = 47;
    cout << endl;
    cout << "Encuentra el Numero Magico Entre 1 a 100." << endl;
    cout << "solo posee 5 intentos." << endl;
    numero(n);
    system("pause");
    return 0;
}
int numero(int n)
{
    int a, i;
    i = 1;
    do
    {
        cout << "Digite el numero: " << endl;
        cin >> a;
        
        if (a == 199)
        {
        break;
        }
           else if( a < n)
        {
            cout << "El numero es menor al numero magico, Intento " << i << " ,intentalo de nuevo," << endl
            << "para no continuar digite 199 o Ctrl-z" << endl;
        }
        
       else  if (a > n)
        {
            cout << "El numero es mayor al numero magico, Intento " << i << " ,intentalo de nuevo," << endl
             << "para no continuar digite 199 o Ctrl-z" << endl;
        }
         else if (a == 47)
        {
        cout << "HAS ENCONTRADO EL NUMERO." << endl;
        break;
        }
        
    i= i + 1;
    }while (a ==! 47 || i < 6);
    if(i == 6)
    {
        cout << endl;
        cout << "se acabaron los intentos." << endl;
}
    if( a == 199)
    {
         cout << endl;
        cout << "A finalizado el programa" << endl;
    }
}