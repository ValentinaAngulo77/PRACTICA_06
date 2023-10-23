// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 11

// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
// entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
// de Ullman (en honor al matem�tico Ullman) que consiste en lo siguiente:
// � Empiece con cualquier entero positivo.
// � Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
// � Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por
// ejemplo, cuando el entero inicial es 26, la secuencia ser�:
// 26 13 40 20 10 5 16 8 4 2 1
#include <iostream>

// Funci�n recursiva para imprimir la conjetura de Ullman
void conjeturaUllman(int n) {
    std::cout << n << " ";

    // Caso base: cuando el n�mero alcanza 1
    if (n == 1) {
        return;
    } else {
        // Si el n�mero es par, div�dalo entre 2; si es impar, multipl�quelo por 3 y agr�guele 1
        if (n % 2 == 0) {
            conjeturaUllman(n / 2);
        } else {
            conjeturaUllman(3 * n + 1);
        }
    }
}

int main() {
    // Solicitar al usuario un entero inicial n > 1
    int n;
    std::cout << "Ingrese un entero mayor que 1: ";
    std::cin >> n;

    // Verificar si el valor ingresado es v�lido
    if (n <= 1) {
        std::cout << "Por favor, ingrese un entero mayor que 1." << std::endl;
        return 1;  // Salir con c�digo de error
    }

    // Calcular e imprimir la conjetura de Ullman utilizando la funci�n recursiva
    std::cout << "Conjetura de Ullman para " << n << ": ";
    conjeturaUllman(n);

    return 0;
}
