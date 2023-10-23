// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 9

// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23,
// 28, 38, 49,..., para n t�rminos
#include <iostream>

// Funci�n recursiva para generar la secuencia
int generarSecuencia(int n, int terminoAnterior, int terminoAnteAnterior) {
    // Caso base: cuando n es igual a 1, retorna el primer t�rmino
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    } else if (n == 3) {
        return 2;
    } else {
        // Llamada recursiva para calcular el t�rmino actual
        return 2 * terminoAnteAnterior + terminoAnterior + n - 3;
    }
}

int main() {
    // Solicitar al usuario el n�mero de t�rminos
    int n;
    std::cout << "Ingrese el n�mero de t�rminos: ";
    std::cin >> n;

    // Verificar si el n�mero de t�rminos es v�lido
    if (n <= 0) {
        std::cout << "Por favor, ingrese un n�mero de t�rminos v�lido." << std::endl;
        return 1;  // Salir con c�digo de error
    }

    // Mostrar la secuencia utilizando la funci�n recursiva
    std::cout << "La secuencia es: ";
    for (int i = 1; i <= n; ++i) {
        std::cout << generarSecuencia(i, i > 1 ? generarSecuencia(i - 1, i - 2, i - 3) : 0, i > 2 ? generarSecuencia(i - 2, i - 3, i - 4) : 0) << " ";
    }

    return 0;
}
