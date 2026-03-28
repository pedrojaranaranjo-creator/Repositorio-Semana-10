
#include <iostream>

using namespace 

int main() {

int n;

cout << "ingrese dos numeros: ";
cin >> a >> b
cout << "suma: " << a + b << endl;
cout << "resta: " << a - b << endl;
cout << "multiplicacion: " << (a * b) << endl;
return 0;


}




Me olvidé de completar using namespace std; declaré mal las variables, puse n en vez de a y b. Se me pasó el punto y coma ; después del cin. Usé variables (a y b) sin haberlas declarado antes




#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;

    return 0;
}
