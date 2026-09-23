#include <iostream> 
using namespace std; 

void ord(int arr[], int sz) { 
    int i = 0;

    while (i < sz - 1) { 
        int indMax = i; 

        for (int j = i + 1; j < sz; j++) { 
            if (arr[j] > arr[indMax]) { 
                indMax = j; 
            } 
        } 

        if (indMax != i) {
            int aux = arr[i]; 
            arr[i] = arr[indMax]; 
            arr[indMax] = aux; 
        }

        i++; 
    } 
} 

int main() { 
    int sz; 
    cout << "Cantidad de numeros: "; 
    cin >> sz; 
    
    int arr[sz]; 
    for (int i = 0; i < sz; i++) { 
        cout << "Arreglo[" << i << "]: "; 
        cin >> arr[i]; 
    } 
    
    ord(arr, sz); 
    
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < sz; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
    
    return 0; 
}
