#include <cstring>
#include <iostream>

using namespace std;

/**
 * 
 * Realizar una rutina que recibe 3 parámetros: 
 * un arreglo de n caracteres, n y un caracter, 
 * 
 * y muestre las posiciones donde se encuentra dicho carácter y cuantas veces se encuentra en el arreglo. 
 * 
 * Si no lo encuentra debe indicar que ese carácter no existe en el arreglo.
 *
 */


 int cantidadVecesRepetida(char arreglo[], int maxChars, char charABuscar) {

    //mostrar las posiciones donde está dicho caracter
    //mostrar cuantas veces se encuentra en el arreglo y si no lo encuentra, debe indicar que ese caracter no existe en el arreglo

    cout << "Caracter analizado: " << charABuscar << endl;

    int repiteVeces = 0;

    for (int indice = 0; indice < maxChars; indice++) {

        if (arreglo[indice]  == charABuscar) {
            repiteVeces++;
            cout << "Caracter encontrado en posicion " << indice << endl;
        }
    }

    return repiteVeces;

}

void procesarCadena(char arreglo[], int maxChars, char charABuscar) {

    int vecesRepite = cantidadVecesRepetida(arreglo, maxChars, charABuscar);

    if (vecesRepite == 0) {
        cout << "El caracter no se encuentra en el arreglo";
    } else {
        cout << "El caracter se repite " << vecesRepite << " veces";
    }

}



int main() {

    char arreglo1[] = "apalapapa";

    procesarCadena(arreglo1, 10, 'a'); 
    
    return EXIT_SUCCESS;
}