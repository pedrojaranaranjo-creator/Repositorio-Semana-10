#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double promedio;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    promedio = (num1 + num2 + num3) / 3.0;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}