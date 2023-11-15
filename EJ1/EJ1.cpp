#include <iostream>
#include "Funciones.h"

using namespace std;
using namespace funciones;

int main() {
    // Solicitar números al usuario
    double a, b;
    cout << "Ingrese el primer numero (a): ";
    cin >> a;

    cout << "Ingrese el segundo nUmero (b): ";
    cin >> b;

    // Utilizar las funciones
    cout << "Suma: " << sumar(a, b) << endl;
    cout << "Resta: " << restar(a, b) << endl;
    cout << "MultiplicaciOn: " << multiplicar(a, b) << endl;

    // Manejo de división por cero
    if (b != 0) {
        cout << "Division: " << dividir(a, b) << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    cout << "Elevar al cuadrado: " << potencia(a) << endl;

    // Manejo de raíz cuadrada de número negativo
    if (a >= 0) {
        cout << "Raiz cuadrada de a: " << raiz(a) << endl;
    } else {
        cout << "No se puede calcular la raiz cuadrada de un numero negativo." << endl;
    }

    // Manejo de logaritmo de número no positivo
    if (a > 0) {
        cout << "Logaritmo de a: " << logaritmo(a) << endl;
    } else {
        cout << "No se puede calcular el logaritmo de un numero no positivo." << endl;
    }

    return 0;
}

