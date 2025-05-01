#include <iostream>

/*

Consigna

Realizar una función que dado un arreglo de 45 elementos de tipo carácter que contiene una palabra,
devuelva otro arreglo de 5 elementos enteros donde cada uno representa la cantidad de veces que se repite cada vocal en la palabra

*/

const int MAX_CARACTERES = 45;
const int MAX_VOCALES = 5;

// Comentario 1: en este punto es bueno recordar que los arreglos siempre pasan por referencia (no es necesario agregar el "&"),
// o sea, siempre se pasa la dirección de memoria, no es que se copia el valor

// Comentario 2: un arreglo de enteros es igual a un arreglo de caracteres, solo que en vez de contener caracteres, contiene enteros
void contarVocales(char texto[], int contadorVocales[])
{

    int indice = 0;

    while (indice < MAX_CARACTERES && texto[indice] != '\0')
    {
        // Convertir el carácter a minúscula para evitar problemas de mayúsculas
        char letra = tolower(texto[indice]);

        // Contar las vocales
        switch (letra)
        {
        case 'a':
            contadorVocales[0]++;
            break;
        case 'e':
            contadorVocales[1]++;
            break;
        case 'i':
            contadorVocales[2]++;
            break;
        case 'o':
            contadorVocales[3]++;
            break;
        case 'u':
            contadorVocales[4]++;
            break;
        }
        indice++;
    }
};

void imprimirCantidadVocales(int contadorVocales[])
{
    std::cout << "Cantidad de vocales:" << std::endl;
    std::cout << "A: " << contadorVocales[0] << std::endl;
    std::cout << "E: " << contadorVocales[1] << std::endl;
    std::cout << "I: " << contadorVocales[2] << std::endl;
    std::cout << "O: " << contadorVocales[3] << std::endl;
    std::cout << "U: " << contadorVocales[4] << std::endl;
}

int main()
{

    /**
     *
     * Cantidad de vocales:
     * A: 9
     * E: 2
     * I: 1
     * O: 3
     * U: 0
     *
     */
    char parrafoPrueba[MAX_CARACTERES] = "Feliz día a los trabajadores y trabajadoras";
    // Inicializar el contador de vocales a 0
    int contadorVocales[MAX_VOCALES] = {0};

    contarVocales(parrafoPrueba, contadorVocales);
    imprimirCantidadVocales(contadorVocales);

    /**
     *
     * Cantidad de vocales:
     * A: 1
     * E: 1
     * I: 2
     * O: 0
     * U: 1
     *
     */
    char parrafoPrueba2[MAX_CARACTERES] = "Universidad!";
    // Inicializar el contador de vocales a 0
    int contadorVocales2[MAX_VOCALES] = {0};

    contarVocales(parrafoPrueba2, contadorVocales2);
    imprimirCantidadVocales(contadorVocales2);

    return EXIT_SUCCESS;
}