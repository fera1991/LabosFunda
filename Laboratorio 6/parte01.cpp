#include "iostream"
using namespace std;
int main (void)
{
    int arreglo[100];
    int x = 0;
    for (int i = 1; i < 200; i++)
    {
       
       if (i % 2 != 0 )
       {
           arreglo[x] = i;
           x ++;
       }
       
    }
    for (int j = 99 ; j > -1; j--)
    {
        cout << arreglo[j] << endl;
    }
    
}