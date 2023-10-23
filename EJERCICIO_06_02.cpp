// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
49,..., para n t�rminos.
#include <iostream>

// Funci�n para generar la secuencia
int generarSecuencia(int n) {
    int resultado = 1;
    int incremento = 0;

    for (int i = 1; i <= n; ++i) {
        // La secuencia sigue un patr�n espec�fico
        if (i % 3 == 0) {
            incremento += 5;
        } else {
            incremento += 1;
        }

        resultado += incremento;
    }

    return resultado;
}

int main() {
    // Solicitar al usuario el n�mero de t�rminos
    int n;
    std::cout << "Ingrese el n�mero de t�rminos: ";
    std::cin >> n;

    // Generar la secuencia
    std::cout << "La secuencia es: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << generarSecuencia(i) << " ";
    }

    return 0;
}
