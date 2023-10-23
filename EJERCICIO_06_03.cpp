// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 3

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos.
#include <iostream>
#include <vector>

// Función recursiva para calcular la suma de elementos de un vector
int sumaVectorRecursiva(const std::vector<int>& vec, int indice) {
    // Caso base: cuando el índice llega al final del vector
    if (indice == vec.size()) {
        return 0;  // Retorna 0 para no afectar la suma final
    } else {
        // Llamada recursiva con el próximo índice
        return vec[indice] + sumaVectorRecursiva(vec, indice + 1);
    }
}

int main() {
    // Definir un vector de números enteros
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Calcular la suma de los elementos utilizando la función recursiva
    int resultado = sumaVectorRecursiva(numeros, 0);

    // Mostrar el resultado
    std::cout << "La suma de los elementos del vector es: " << resultado << std::endl;

    return 0;
}
