#include "iostream"
using namespace std;
int funcionhora(int,int,int);

int main(void)
{
    int hora,minuto,segundo;
    cout << "Programa calculador del segundo siguiente de la hora." << endl;
    cout << "Digite la hora: " << endl;
    cin >> hora;
    cout << "Digite los minutos: " << endl;
    cin >> minuto;
    cout << "Digite los segundos: " << endl;
    cin >> segundo;
    funcionhora(hora,minuto,segundo);
}
int funcionhora(int hora,int minuto,int segundo)
{
    segundo++;
 if (segundo == 60)
 {
     segundo =0;
     minuto++;
     if(minuto == 60)
     {
        minuto =0;
        hora ++;
        if (hora == 25)
        {
            hora = 1;
        }
        
     }
 }
 cout << hora << ":" << minuto << ":" << segundo;
 return 0;
}