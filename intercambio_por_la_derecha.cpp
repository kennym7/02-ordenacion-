#include <iostream>

using namespace std;

void ord(int arr[], int sz) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = 0; j < sz - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main() {
    int sz;

    cout << "cantidad de numeros: ";
    cin >> sz;

    int arr[sz];

    for (int i = 0; i < sz; i++) {
        cout << "Arreglo[" << i << "]: ";
        cin >> arr[i];
    }

    ord(arr, sz);

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}