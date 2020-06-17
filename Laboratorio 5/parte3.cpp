#include "iostream"
#include "stdbool.h"
using namespace std;
bool funcionbool(int);
int main(void)
{
    bool t;
    int a;
    cout << "Digite el año: " << endl; 
    cin >> a;
    t = funcionbool(a);
    if (t == true)
    {
        cout << "El año es bisiesto";
    }
    else
    {
        cout << "El año no es bisiesto";
    }
    


    
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

