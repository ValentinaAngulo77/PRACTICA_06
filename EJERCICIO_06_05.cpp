// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 5

// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
#include <iostream>
#include <vector>

// Funci�n recursiva para comparar dos vectores
bool sonVectoresIguales(const std::vector<int>& vector1, const std::vector<int>& vector2, int indice) {
    // Caso base: cuando se llega al final de ambos vectores
    if (indice == vector1.size() && indice == vector2.size()) {
        return true;  // Ambos vectores son iguales hasta este punto
    }

    // Caso base: si los tama�os de los vectores son diferentes, no pueden ser iguales
    if (indice >= vector1.size() || indice >= vector2.size()) {
        return false;
    }

    // Verificar si los elementos en la posici�n actual son iguales y llamar recursivamente
    return (vector1[indice] == vector2[indice]) && sonVectoresIguales(vector1, vector2, indice + 1);
}

int main() {
    // Definir dos vectores de n�meros enteros
    std::vector<int> vectorA = {1, 2, 3, 4, 5};
    std::vector<int> vectorB = {1, 2, 3, 4, 5};

    // Comparar los vectores utilizando la funci�n recursiva
    if (sonVectoresIguales(vectorA, vectorB, 0)) {
        std::cout << "Los vectores son iguales." << std::endl;
    } else {
        std::cout << "Los vectores no son iguales." << std::endl;
    }

    return 0;
}
