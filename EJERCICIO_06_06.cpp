// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 6

// Problema planteado:Realizar un algoritmo recursivo para la siguiente funci�n.
#include <iostream>

// Funci�n recursiva para calcular Q(n)
int calcularQ(int n) {
    // Caso base: Q(0) es 0
    if (n == 0) {
        return 0;
    } else {
        // Llamada recursiva y sumar el cuadrado del n�mero actual
        return n * n + calcularQ(n - 1);
    }
}

int main() {
    // Solicitar al usuario un n�mero
    int numero;
    std::cout << "Ingrese un n�mero para calcular Q(n): ";
    std::cin >> numero;

    // Calcular Q(n) utilizando la funci�n recursiva
    int resultado = calcularQ(numero);

    // Mostrar el resultado
    std::cout << "Q(" << numero << ") = " << resultado << std::endl;

    return 0;
}
