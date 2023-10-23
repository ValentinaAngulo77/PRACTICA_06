// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 1

// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides.
#include <iostream>

// Función recursiva para calcular el MCD usando el algoritmo de Euclides
int mcdEuclides(int a, int b) {
    // Caso base: el MCD de un número y 0 es el propio número
    if (b == 0) {
        return a;
    } else {
        // Llamada recursiva con los argumentos intercambiados
        return mcdEuclides(b, a % b);
    }
}

int main() {
    // Entrada de los dos números para calcular el MCD
    int num1, num2;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Calcular el MCD utilizando la función recursiva
    int resultado = mcdEuclides(num1, num2);

    // Mostrar el resultado
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}
