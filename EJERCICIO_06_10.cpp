// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos n�meros enteros, a partir de la relaci�n:(n/m):((n!)/((n-m)!*m!))
#include <iostream>

// Funci�n recursiva para calcular el factorial de un n�mero
int factorial(int n) {
    // Caso base: factorial de 0 es 1
    if (n == 0) {
        return 1;
    } else {
        // Llamada recursiva para calcular el factorial
        return n * factorial(n - 1);
    }
}

// Funci�n recursiva para calcular el coeficiente binomial
int coeficienteBinomial(int n, int m) {
    // Verificar si m es 0 o igual a n
    if (m == 0 || m == n) {
        return 1;
    } else {
        // Utilizar la f�rmula del coeficiente binomial
        return factorial(n) / (factorial(n - m) * factorial(m));
    }
}

int main() {
    // Solicitar al usuario dos n�meros enteros
    int n, m;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;
    std::cout << "Ingrese el valor de m: ";
    std::cin >> m;

    // Verificar si los valores ingresados son v�lidos
    if (n < 0 || m < 0 || m > n) {
        std::cout << "Por favor, ingrese valores v�lidos para n y m." << std::endl;
        return 1;  // Salir con c�digo de error
    }

    // Calcular el coeficiente binomial utilizando la funci�n recursiva
    int resultado = coeficienteBinomial(n, m);

    // Mostrar el resultado
    std::cout << "El coeficiente binomial C(" << n << ", " << m << ") es: " << resultado << std::endl;

    return 0;
}
