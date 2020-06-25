#include "iostream"
using namespace std;
int main (void)
{
    int x,n,ent,ns = 0;

    do{
    cout << "Digite cuantos numero a ingresar."  << endl;
    cin >> x;
    }while(x<=0);

    int arreglo[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Digite los numeros: " << endl; 
        cin >> n; 
        arreglo[i] = n;
    }

    cout << "Digite el numero a evaluar: " << endl;
    cin >> ent;
    for (int j = 0; j < x; j++)
    {
        if(ent == arreglo[j])
        {
            ns++;
        }
    }

    cout << "el numero: " << ent <<" se repite: " << ns;
    
}