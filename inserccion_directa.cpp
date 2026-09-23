#include <iostream> 
using namespace std; 

void ord(int arr[], int sz) { 
    int i = 1;

    while (i < sz) { 
        int aux = arr[i]; 
        int j = i - 1; 

        while (j >= 0 && arr[j] < aux) { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
        
        arr[j + 1] = aux; 
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
