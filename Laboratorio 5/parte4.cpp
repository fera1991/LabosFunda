#include "iostream"
using namespace std;
int funcionfecha(int,int,int);
bool funcionbool(int a);
bool funcionerror(int,int,int);
int main(void)
{
    int dia,mes,a;
    bool b; 
    cout << "Programa calculador del dia siguiente de año" << endl;
    cout << "Digite el dias: " << endl;
    cin >> dia;
    cout << "Digite el mes: " << endl;
    cin >> mes;
    cout << "Digite el año: " << endl;
    cin >> a;
    funcionerror(dia,mes,a);
    b = funcionerror(dia,mes,a);
    if(b == true)
    {
    funcionbool(a);
    funcionfecha(dia,mes,a);
    }
    else
    {
        cout << "Numero invalido" << endl;
    }
    system("pause");
    return 0;
}
bool funcionerror(int dia, int mes, int a)
{
    
    if(dia > 31 || mes > 12)
    {
       return false;
    }
}
int funcionfecha(int dia,int mes,int a)
{
    bool t;
    t = funcionbool(a);
    dia++;
    if( t == true && mes == 2)
    {
        if (dia > 29)
        {
            dia = 1;
            mes= mes + 1;
        }
        
    }
    if (t == false && mes == 2)
    {
        dia = 1;
        mes = mes + 1;
    }
    
    if (mes == 4,6,9,11)
    {
        if (dia>30)
        {
            dia = 1;
            mes++;
        }
        
    }
    
    if (dia > 31)
    {
        mes++;
        dia = 1;
    }
    if (mes > 12)
        {
        a++;
        mes = 1;
        }
    cout << dia << "/" << mes << "/" << a << endl;


}
bool funcionbool(int a)
{
    int b,c,d;
    b= a%400;
    if(b==0)
    {
        return true;
    }
    else
    {
        c=a%4;
        d=a%100;
        if(c==0 && d !=0)
        {
            return true;
        }
        else
        {
            return false;
        }   
    }
}