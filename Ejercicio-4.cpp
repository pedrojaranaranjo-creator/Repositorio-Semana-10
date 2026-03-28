#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {

    int numero;
    int contador = 0;

    cout << "Digite un numero: " << endl;
    cin >> numero;

    while (numero >= 2) {
        int mitad = numero / 2;

        cout << numero << " / 2 = " << mitad << endl;

        numero = mitad;
        contador++;
    }

    cout << "Se realizo la division " << contador << " veces" << endl;

    return 0;
}