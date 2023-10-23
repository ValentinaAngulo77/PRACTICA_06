// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 7

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// m�s en ser tambi�n productiva, �cu�ntos pares de conejos podr� poner a la
// venta el granjero al cabo de un a�o?
#include <iostream>

// Funci�n recursiva para calcular la cantidad de parejas de conejos al cabo de un a�o
int parejasDeConejos(int meses) {
    // Caso base: despu�s de un a�o (12 meses), la cantidad de parejas es 1
    if (meses == 12) {
        return 1;
    } else {
        // Llamada recursiva para calcular las parejas en los meses restantes
        return 1 + parejasDeConejos(meses + 1);
    }
}

int main() {
    // Calcular la cantidad de parejas de conejos al cabo de un a�o (12 meses)
    int resultado = parejasDeConejos(0);

    // Mostrar el resultado
    std::cout << "Despu�s de un a�o, el granjero podr� poner a la venta "
              << resultado << " pares de conejos." << std::endl;

    return 0;
}
