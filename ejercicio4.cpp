#include "iostream"
using namespace std;

void leer_arreglos(int lenth, int array1[], int array2[]);
void suma_arreglos(int lenth, int array1[], int array2[], int array3[]);
void desplegar_resultado(int lenth, int array3[]);

int main()
{
    int longitud; 

    cout << "\nCuantos elementos tendran los arreglos? ";
    cin >> longitud;

    while(longitud <= 0){
        cout << "\nEl valor debe ser mayor a cero: ";
        cin >> longitud;
    }

    int arreglo1[longitud], arreglo2[longitud], arreglo3[longitud];

    leer_arreglos(longitud, arreglo1, arreglo2);
    suma_arreglos(longitud, arreglo1, arreglo2, arreglo3);
    desplegar_resultado(longitud, arreglo3);
}
void leer_arreglos(int lenth,  int array1[], int array2[])
{
    cout << "\nIngresa los valores para el primer arreglo\n";
    for (int i = 0; i < lenth; i++)
    {
        int x;
        cout << "Ingresa un valor: ";
        cin >> x;
        array1[i] = x;
    }
    cout << "\nIngresa los valores para el segundo arreglo\n";
    for (int i=0; i<lenth; i++)
    {
        int x;
        cout << "Ingresa un valor: ";
        cin >> x;
        array2[i] = x;
    }
}
void suma_arreglos(int lenth, int array1[], int array2[], int array3[])
{
    for (int i=0; i<lenth; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
}
void desplegar_resultado(int lenth, int array3[])
{
    cout << endl;
    for (int i=0; i<lenth; i++)
    {
        cout << "La sumatoria en la posicion " << i + 1 << " es: " << array3[i];
        cout << endl;
    }
}