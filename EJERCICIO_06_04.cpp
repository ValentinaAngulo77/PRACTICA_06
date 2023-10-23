// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 4

// Problema planteado:Realizar un algoritmo recursivo que escriba al revés una cadena.
#include <iostream>

// Función recursiva para invertir una cadena
void invertirCadenaRecursiva(const std::string& cadena, int indice) {
    // Caso base: cuando se llega al final de la cadena
    if (indice == 0) {
        std::cout << cadena[indice];
    } else {
        // Imprimir el carácter actual y llamar recursivamente con el índice anterior
        std::cout << cadena[indice];
        invertirCadenaRecursiva(cadena, indice - 1);
    }
}

int main() {
    // Solicitar al usuario una cadena
    std::string input;
    std::cout << "Ingrese una cadena: ";
    std::cin >> input;

    // Calcular la longitud de la cadena
    int longitud = input.length();

    // Invertir la cadena utilizando la función recursiva
    std::cout << "La cadena invertida es: ";
    invertirCadenaRecursiva(input, longitud - 1);

    return 0;
}
