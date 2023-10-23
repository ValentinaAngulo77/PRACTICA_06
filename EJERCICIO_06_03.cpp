// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 3

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de n�meros enteros, retorne la
// suma de sus elementos.
#include <iostream>
#include <vector>

// Funci�n recursiva para calcular la suma de elementos de un vector
int sumaVectorRecursiva(const std::vector<int>& vec, int indice) {
    // Caso base: cuando el �ndice llega al final del vector
    if (indice == vec.size()) {
        return 0;  // Retorna 0 para no afectar la suma final
    } else {
        // Llamada recursiva con el pr�ximo �ndice
        return vec[indice] + sumaVectorRecursiva(vec, indice + 1);
    }
}

int main() {
    // Definir un vector de n�meros enteros
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Calcular la suma de los elementos utilizando la funci�n recursiva
    int resultado = sumaVectorRecursiva(numeros, 0);

    // Mostrar el resultado
    std::cout << "La suma de los elementos del vector es: " << resultado << std::endl;

    return 0;
}
