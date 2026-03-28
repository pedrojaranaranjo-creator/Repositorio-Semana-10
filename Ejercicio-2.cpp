 #include <iostream>
using namespace std;

int main() {
 cout << "Cuantos numeros vas a ingresar: ";
    int cantidad;
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 0;
    }

    int numero;
    int mayor, menor;

    cout << "Ingresa el numero 1: ";
    cin >> numero;
    mayor = menor = numero;

    for (int i = 2; i <= cantidad; ++i) {
        cout << "Ingresa el numero " << i << ": ";
        cin >> numero;

        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}