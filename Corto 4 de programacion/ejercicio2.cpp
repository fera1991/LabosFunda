#include "iostream"
using namespace std;
float promedios(float estudiantes[]);
float comparacion(float[],float);

int main(void)
{
    float estudiantes[25];
    cout << "calculadora de promedio de altura" << endl << endl;
    
     for (int i = 0; i <= 24; i++)
     {
         cout << "Digite la estatura del estudiante " << i << endl;
         cin >> estudiantes[i];
     }
     promedios(estudiantes);
     return 0;

}
float promedios(float estudiantes[])
{
float suma = 0, media = 0;
     for ( int j = 0; j <= 24; j++)
     {
        suma = suma + estudiantes[j];
     }
     media = suma/25;
     cout << "La media de altura es: " << media << endl;
     comparacion(estudiantes,media);
}
float comparacion(float estudiantes[],float media)
{
     int a= 0,b = 0;
         for (int k = 0; k <= 24; k++)
     {
         if (estudiantes[k] > media)
         {
             a++;
         }
         if (estudiantes[k] < media)
         {
             b++;
         }
     }
     cout << a << " estudiantes arriba de la media." << endl;
     cout << b << " estudiantes debajo de la media." << endl;
}