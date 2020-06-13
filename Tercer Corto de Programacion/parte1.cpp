#include "iostream"
using namespace std;
float salarios1(int hora, int extra, int i);

int main(void)
{
    int hora, extra, emp;
    cout << endl;
    cout << "Calculo de salarios" << endl;
    cout << "Digite la cantidad de empleados ";
    cin >> emp;
    for (int i = 1; i <= emp; i++)
    {
    cout << endl;
    cout << "Digite las horas trabajadas del empleado " << i << " : ";
    cin >> hora;
    cout << endl;
    cout << "Digite las horas extras trabajadas del empleado " << i << " : ";
    cin >> extra;
    salarios1(hora,extra,i);

    }
    system("pause);
    return 0;
}
    
float salarios1(int hora, int extra, int i)
{
    float total, destotal, des1,des2,des3, sumades;
    hora = hora * 1.17;
    extra = extra * 2.50;
    total = hora + extra;
    destotal = total;
    des1 = total * 0.04;
    des2 = total * 0.0625;
    des3 = 0;
    if (total > 500)
    {
        des3 = total * 0.10;
    }
    sumades = des1 + des2 +des3;
    destotal = destotal - sumades;
    cout << "El total del empleado " << i << " es: " << total << endl;
    cout << "El total del descuento del empleado " << i << " es: " << destotal << endl;
}

   
