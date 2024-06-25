#include <iostream>
using namespace std;

// Función para intercambiar dos elementos 
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para ordenar el array usando Burbuja
void burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Función para imprimir el array ordenado
void imprimirArray(int arr[], int n) {
    cout << "Array ordenado: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Ordenar el array usando Burbuja
    burbuja(arr, n);

    // Imprimir el array ordenado
    imprimirArray(arr, n);

    return 0;
}
