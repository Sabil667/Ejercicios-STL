#include "funciones.h"
#include <cmath>

namespace funciones{
    // Implementación de funciones
    double sumar(double a, double b) {
        return a + b;
    }

    double restar(double a, double b) {
        return a - b;
    }

    double multiplicar(double a, double b) {
        return a * b;
    }

    double dividir(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            // Manejo de división por cero
            return NAN;  // "Not a Number" para indicar un resultado no válido
        }
    }

    double potencia(double a) {
        return a * a;
    }

    double raiz(double a) {
        if (a >= 0) {
            return sqrt(a);
        } else {
            // Manejo de raíz cuadrada de número negativo
            return NAN;  // "Not a Number" para indicar un resultado no válido
        }
    }

    double logaritmo(double a) {
        if (a > 0) {
            return log(a);
        } else {
            // Manejo de logaritmo de número no positivo
            return NAN;  // "Not a Number" para indicar un resultado no válido
        }
    }
}