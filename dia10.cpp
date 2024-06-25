#include <iostream>
#include <string>
#include <cctype> // Para usar funciones como tolower y isalnum
using namespace std;

// Función que verificar si una cadena es un palíndromo
bool esPalindromo(const string& str) {
    int izquierda = 0;
    int derecha = str.length() - 1;

    while (izquierda < derecha) {
        // Ignorar caracteres que no sean alfanuméricos
        while (izquierda < derecha && !isalnum(str[izquierda])) {
            izquierda++;
        }
        while (izquierda < derecha && !isalnum(str[derecha])) {
            derecha--;
        }

        // Convertir ambos caracteres a minúsculas para comparar
        char charIzquierda = tolower(str[izquierda]);
        char charDerecha = tolower(str[derecha]);

        // Si los caracteres son diferentes, no es un palíndromo
        if (charIzquierda != charDerecha) {
            return false;
        }

        // Mover los índices hacia el centro
        izquierda++;
        derecha--;
    }

    // Si llegamos aquí, la cadena es un palíndromo
    return true;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena para verificar si es un palindromo: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "La cadena ingresada es un palindromo.\n";
    } else {
        cout << "La cadena ingresada NO es un palindromo.\n";
    }

    return 0;
}
