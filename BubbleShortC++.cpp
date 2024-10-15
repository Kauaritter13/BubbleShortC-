#include <iostream>
#define MAX 10

void organiza(int vet[]) {
    int temp;
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numero[MAX];
    for (int i = 0; i < MAX; i++) {
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> numero[i];
    }
    organiza(numero);
    std::cout << "Elementos organizados: ";
    for (int i = 0; i < MAX; i++) {
        std::cout << numero[i] << " ";
    }
    std::cout << std::endl;
}
