// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 17/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 7

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
// venta el granjero al cabo de un año?
#include <iostream>

// Función recursiva para calcular la cantidad de parejas de conejos al cabo de un año
int parejasDeConejos(int meses) {
    // Caso base: después de un año (12 meses), la cantidad de parejas es 1
    if (meses == 12) {
        return 1;
    } else {
        // Llamada recursiva para calcular las parejas en los meses restantes
        return 1 + parejasDeConejos(meses + 1);
    }
}

int main() {
    // Calcular la cantidad de parejas de conejos al cabo de un año (12 meses)
    int resultado = parejasDeConejos(0);

    // Mostrar el resultado
    std::cout << "Después de un año, el granjero podrá poner a la venta "
              << resultado << " pares de conejos." << std::endl;

    return 0;
}
