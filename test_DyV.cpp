#include<iostream>
#include "DyV.h"
#include<vector>
#include<cassert>
//asser indica si las condiciones son verdaderas y si no lo son para el programa
int main(){

	// Caso 1: Elemento presente en el vector
    std::vector<int> v1 = {1, 3, 5, 7, 9};
    assert(busquedabin(5, v1, 0, v1.size() - 1) == 2); // 5 está en la posición 2
    std::cout << "Prueba 1 pasada." << std::endl;

    // Caso 2: Elemento no presente en el vector
    assert(busquedabin(6, v1, 0, v1.size() - 1) == -1); // 6 no está en el vector
    std::cout << "Prueba 2 pasada." << std::endl;

    // Caso 3: Elemento en el inicio del vector
    assert(busquedabin(1, v1, 0, v1.size() - 1) == 0); // 1 está en la posición 0
    std::cout << "Prueba 3 pasada." << std::endl;

    // Caso 4: Elemento en el final del vector
    assert(busquedabin(9, v1, 0, v1.size() - 1) == 4); // 9 está en la posición 4
    std::cout << "Prueba 4 pasada." << std::endl;

    // Caso 5: Vector vacío
    std::vector<int> v2 = {};
    assert(busquedabin(3, v2, 0, v2.size() - 1) == -1); // Buscar en un vector vacío debe dar -1
    std::cout << "Prueba 5 pasada." << std::endl;

    // Caso 6: Vector con un solo elemento (caso borde)
    std::vector<int> v3 = {10};
    assert(busquedabin(10, v3, 0, v3.size() - 1) == 0); // Elemento está en la posición 0
    assert(busquedabin(5, v3, 0, v3.size() - 1) == -1); // Elemento no está presente
    std::cout << "Prueba 6 pasada." << std::endl;

    std::cout << "¡Todas las pruebas pasaron correctamente!" << std::endl;
    return 0;
    
}
