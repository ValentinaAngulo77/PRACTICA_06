// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 4

// Problema planteado:Realizar un algoritmo recursivo que escriba al rev�s una cadena.
#include <iostream>

// Funci�n recursiva para invertir una cadena
void invertirCadenaRecursiva(const std::string& cadena, int indice) {
    // Caso base: cuando se llega al final de la cadena
    if (indice == 0) {
        std::cout << cadena[indice];
    } else {
        // Imprimir el car�cter actual y llamar recursivamente con el �ndice anterior
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

    // Invertir la cadena utilizando la funci�n recursiva
    std::cout << "La cadena invertida es: ";
    invertirCadenaRecursiva(input, longitud - 1);

    return 0;
}
