#include <iostream>
using namespace std;

void shellsort(int n[], int a) {
    int k = a + 1;

    while (k > 1) {
        k = k / 2;

        for (int i = k + 1; i <= a; i++) {
            int aux = n[i];
            int j = i;

            while (j - k >= 1 && n[j - k] > aux) {
                n[j] = n[j - k];
                j = j - k;
            }
            n[j] = aux;
        }
    }
}

int main() {
    int a;
    cout << "indique la cantidad de numero dentro del arreglo: ";
    cin >> a;

    int n[a + 1];
    for (int i = 1; i <= a; i++) {
        cout << "arreglo " << i << ": ";
        cin >> n[i];
    }

    shellsort(n, a);

    cout << "--------------el arreglo ordenado---------" << endl;
    for (int i = 1; i <= a; i++) {
        cout << n[i] << "\t";
    }
    cout << endl;

    return 0;
}

