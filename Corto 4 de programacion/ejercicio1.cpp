#include "iostream"
#include "string.h"
using namespace std;
char funcion1(char[]);
int main (void)
{
    char palabra[20];
    cout << "Clave murcielago" << endl << endl;
    cout << "Digite la frase" << endl;
    gets(palabra);
    funcion1(palabra);
    return 0;
}

char funcion1(char palabra[])
{
    char letras[10] = {'m','u','r','c','i','e','l','a','g','o'};
    char numeros[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int a = strlen(palabra);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (palabra[i]==letras[j])
            {
                palabra[i]=numeros[j];
            }
            
        }
        
    }
    cout << palabra;

}