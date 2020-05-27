#include "iostream"
using namespace std;
int main(void)
{
    string a;
    int b;
    cout << endl;
    cout << "Verificador de letra inicial igual a su final" << endl;
    cout << "escriba la palabra" << endl;
    cin >> a;
    b = (a.length()-1);
    if (a[0] == a[b])
    {
        cout << "primera y ultima letra son iguales" << endl;
    }
    else
    {
        cout <<"primera y ultima letra no son iguales" << endl;
    }
    
    system("PAUSE");
    return 0;
    
}