#include "iostream"
using namespace std;
float nota(float estudiantes[][5],int);
int main(void)
{
    
    int n;
    cout << "Calculador de nota final." << endl << endl;
    cout << "Digite la cantidad de estudiantes a evaluar: " << endl;
    cin >> n;
    float estudiantes[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cout << "Digite las notas del estudiante " << i << " con dos cifras ejemplo (80)" << endl;
            cout << "Nota " << j << endl;
            cin >> estudiantes[i][j];

        }
        
    }
    nota(estudiantes,n);
}
float nota(float estudiantes[][5],int n)
{
    float suma[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=4 ; j++)
        {
            estudiantes[i][j]=estudiantes[i][j]*0.20;
     
        }
        
    }
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l <= 4; l++)
        {
            suma[k]= suma[k] + estudiantes[k][l];
        }
        
    }
    for (int z = 0; z < n; z++)
    {   
        cout << endl;
        cout << "El Estudiante  " << z << " ,su nota final es: " << suma[z];
        if (suma[z] > 60)
        {
            cout << endl;
            cout << "El estudiante " << z << " ha aprobado." << endl;
        }
        if (suma[z] < 60)
        {
            cout << endl;
            cout << "El estudiante " << z << " ha reprobado." << endl;
        }
        
        
    }
    
}
