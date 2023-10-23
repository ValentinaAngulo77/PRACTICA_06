// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 8

// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
// sim�trica
#include <iostream>

// Funci�n recursiva para verificar si una cadena es sim�trica
bool esSimetrica(const std::string& cadena, int inicio, int fin) {
    // Caso base: cuando el �ndice de inicio es mayor o igual al �ndice de fin
    if (inicio >= fin) {
        return true;  // La cadena es sim�trica hasta este punto
    } else {
        // Verificar si los caracteres en los �ndices correspondientes son iguales
        if (cadena[inicio] != cadena[fin]) {
            return false;  // La cadena no es sim�trica
        } else {
            // Llamada recursiva con los �ndices actualizados
            return esSimetrica(cadena, inicio + 1, fin - 1);
        }
    }
}

int main() {
    // Solicitar al usuario una cadena
    std::string input;
    std::cout << "Ingrese una cadena: ";
    std::cin >> input;

    // Verificar si la cadena es sim�trica utilizando la funci�n recursiva
    if (esSimetrica(input, 0, input.length() - 1)) {
        std::cout << "La cadena es sim�trica." << std::endl;
    } else {
        std::cout << "La cadena no es sim�trica." << std::endl;
    }

    return 0;
}
