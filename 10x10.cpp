#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // número inicial
    int numero = 1;

    // tamanho do quadrado 
    const int tamanho = 10; //para nao ser alterado

    // ciclo for pah fazer as linhas
    for (int i = 0; i < tamanho; ++i) {
        // aqui pahs colunas
        for (int x = 0; x < tamanho; ++x) {
            
            cout << setw(4) << numero++; // o numero que for exibido  nesse caso com 4 caracteres
        }

        cout << endl;
        
        
    }

    return 0;
}
