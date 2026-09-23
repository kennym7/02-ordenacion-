#include <iostream> 
using namespace std; 

void ord(int arr[], int sz) { 
    bool intercambiado = true; 
    int i = 0; 

    while (intercambiado == true) { 
        intercambiado = false;

        for (int j = 0; j < sz - i - 1; j++) { 
            if (arr[j] < arr[j + 1]) { 
                int aux = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = aux; 
                intercambiado = true;
            } 
        } 
        
        i++; 
    } 
} 

int main() { 
    int sz; 
    cout << "Cantidad de numeros del arreglo: "; 
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
