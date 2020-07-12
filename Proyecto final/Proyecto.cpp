#include "iostream"
using namespace std;
const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};
void funcionleer(costoPorArticulo*,int);
void funcioncostoporarticulo(costoPorArticulo*, int);
void funciondespliegue(costoPorArticulo*, int);
float funciontotal(costoPorArticulo*,int);
int main(void)
{   
    int n;
    cout << endl;
    cout << "Programa de factura de Productos." << endl;
    cout << "Digite la cantidad de articulos: ";
    cin >> n;
    costoPorArticulo arreglo[n];
    funcionleer(arreglo, n);
    funcioncostoporarticulo(arreglo, n);
    funciondespliegue(arreglo, n);
    
    cout << "El total de la compra es: " << funciontotal(arreglo, n);
    return 0;
}

void funcionleer(costoPorArticulo arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        cout << "Digite el nombre del articulo "<< i + 1 << ": "; 
        cin >> arreglo[i].nombreArticul; 
        cout << "Digite la cantidad del articulo "<< i + 1 << ": ";
        cin >> arreglo[i].cantidad;
        cout << "Digite el precio del articulo "<< i + 1 << ": ";
        cin >> arreglo[i].precio;
        cout << endl;
    }
   // en esta funcion pedi cada uno las variables de la estructura, menos la variable costo por producto
  
    
}
void funcioncostoporarticulo(costoPorArticulo arreglo[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        arreglo[i].costoPorArticulo = arreglo[i].cantidad*arreglo[i].precio; 
        // en esta funcion multiplique la cantidad y el precio para obtener el costo por articulo
    }

}
void funciondespliegue(costoPorArticulo arreglo[],int n)
{
     cout << "**********************FACTURA*****************************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "**********************************************" << endl;
        cout << "Nombre del articulo   "<< i + 1 <<" : " << arreglo[i].nombreArticul << endl;
        cout << "Cantidad del articulo "<< i + 1 <<" : "  << arreglo[i].cantidad << endl;
        cout << "Precio del articulo   "<< i + 1 <<" : "  << arreglo[i].precio << endl;
        cout << "Costo por articulo    "<< i + 1 <<" : "  << arreglo[i].costoPorArticulo << endl;
        cout << endl;
    } 
    // en esta funcion puse *** para poder separar y que se viera ordenado y como una factura
}
float funciontotal(costoPorArticulo arreglo[],int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + arreglo[i].costoPorArticulo;
    }
    
    return suma;
}