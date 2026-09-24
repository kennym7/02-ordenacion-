#include <iostream>
using namespace std;

void Reduce(int n[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;
    int aux;

    while (cen == 1) {
        cen = 0;

        while (n[pos] <= n[der] && pos != der) {
            der = der - 1;
        }

        if (pos != der) {
            aux = n[pos];
            n[pos] = n[der];
            n[der] = aux;
            pos = der;

            while (n[pos] >= n[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                aux = n[pos];
                n[pos] = n[izq];
                n[izq] = aux;
                pos = izq;
                cen = 1;
            }
        }
    }

    if (pos - 1 > inicio) {
        Reduce(n, inicio, pos - 1);
    }

    if (pos + 1 < final) {
        Reduce(n, pos + 1, final);
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

    Reduce(n, 1, a);

    cout << "--------------el arreglo ordenado---------" << endl;
    for (int i = 1; i <= a; i++) {
        cout << n[i] << "\t";
    }
    cout << endl;

    return 0;
}

