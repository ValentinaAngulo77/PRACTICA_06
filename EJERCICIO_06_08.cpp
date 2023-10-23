// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 8

// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
// simétrica
#include <iostream>

// Función recursiva para verificar si una cadena es simétrica
bool esSimetrica(const std::string& cadena, int inicio, int fin) {
    // Caso base: cuando el índice de inicio es mayor o igual al índice de fin
    if (inicio >= fin) {
        return true;  // La cadena es simétrica hasta este punto
    } else {
        // Verificar si los caracteres en los índices correspondientes son iguales
        if (cadena[inicio] != cadena[fin]) {
            return false;  // La cadena no es simétrica
        } else {
            // Llamada recursiva con los índices actualizados
            return esSimetrica(cadena, inicio + 1, fin - 1);
        }
    }
}

int main() {
    // Solicitar al usuario una cadena
    std::string input;
    std::cout << "Ingrese una cadena: ";
    std::cin >> input;

    // Verificar si la cadena es simétrica utilizando la función recursiva
    if (esSimetrica(input, 0, input.length() - 1)) {
        std::cout << "La cadena es simétrica." << std::endl;
    } else {
        std::cout << "La cadena no es simétrica." << std::endl;
    }

    return 0;
}
