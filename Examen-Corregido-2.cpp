#include <iostream>

using namespace

int main(){

int n;
cout <<"Ingrese un numero:";
cin>> n;
for (int i = 1; i <= n; i++){
    cout<< i << "->"<< i * i << endl;

}

return 0;

}


Me olvidé de completar using namespace std;. Dejé incompleta esa línea, lo que hacía que el código ni compile. Ese error de arriba ya rompía todo el programa aunque lo demás estuviera bien.


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " -> " << i * i << endl;
    }

    return 0;
}
