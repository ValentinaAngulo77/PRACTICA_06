// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 6

// Problema planteado:Realizar un algoritmo recursivo para la siguiente función.
#include <iostream>

// Función recursiva para calcular Q(n)
int calcularQ(int n) {
    // Caso base: Q(0) es 0
    if (n == 0) {
        return 0;
    } else {
        // Llamada recursiva y sumar el cuadrado del número actual
        return n * n + calcularQ(n - 1);
    }
}

int main() {
    // Solicitar al usuario un número
    int numero;
    std::cout << "Ingrese un número para calcular Q(n): ";
    std::cin >> numero;

    // Calcular Q(n) utilizando la función recursiva
    int resultado = calcularQ(numero);

    // Mostrar el resultado
    std::cout << "Q(" << numero << ") = " << resultado << std::endl;

    return 0;
}
