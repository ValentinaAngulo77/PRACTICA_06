// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 1

// Problema planteado: Realizar un algoritmo recursivo para calcular el m�ximo com�n divisor de dos
// n�meros enteros aplicando el algoritmo de Euclides.
#include <iostream>

// Funci�n recursiva para calcular el MCD usando el algoritmo de Euclides
int mcdEuclides(int a, int b) {
    // Caso base: el MCD de un n�mero y 0 es el propio n�mero
    if (b == 0) {
        return a;
    } else {
        // Llamada recursiva con los argumentos intercambiados
        return mcdEuclides(b, a % b);
    }
}

int main() {
    // Entrada de los dos n�meros para calcular el MCD
    int num1, num2;
    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> num2;

    // Calcular el MCD utilizando la funci�n recursiva
    int resultado = mcdEuclides(num1, num2);

    // Mostrar el resultado
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}
