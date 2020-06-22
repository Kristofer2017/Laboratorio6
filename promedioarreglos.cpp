#include "iostream"
using namespace std;

int cantidad(int);

int main(void)
{
    int n, i, resultado;

    cout << "\nContar cuantas veces aparece un numero dentro de un conjunto de datos ingresados\n";
    cout << "\nCuantos valores se ingresaran? ";    
    cin >> n;
    cout << endl;

    while(n <= 0){
        cout << "El valor debe ser mayor a cero: ";
        cin >> n;
    }
    resultado = cantidad(n);

    cout << "\nLa cantidad de veces que ese numero aparece es: " << resultado << endl;

    return 0;
}

int cantidad(int n)
{
    int cantidad = 0, i, x, size, num;

    int array_prom[n];

    size = sizeof(array_prom)/ sizeof (array_prom[0]);    

    for (i = 0; i < size ; i++)
    {
        cout << "Ingresa un numero: ";
        cin >> x;

        array_prom[i] = x;
    }
    cout << "\nIngresa un numero para ver cuantas veces se repite: ";
    cin >> num;

    for (i = 0; i < size ; i++)
    {
        if (array_prom[i] == num)
            cantidad++;
    }    
    return cantidad;
}
