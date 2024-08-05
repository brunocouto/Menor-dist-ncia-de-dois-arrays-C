#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Função para encontrar a menor distância entre dois arrays
int findMinDistance(int arr1[], int size1, int arr2[], int size2) {
    int minDistance = INT_MAX;

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            int distance = abs(arr1[i] - arr2[j]);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    return minDistance;
}

int main() {
    // Definindo os arrays com tamanho >= 10
    int arr1[] = {-1, 5, 10, 20, 30, 40, 50, 60, 70, 80};
    int arr2[] = {26, 6, 15, 25, 35, 45, 55, 65, 75, 85};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Encontrando a menor distância
    int minDistance = findMinDistance(arr1, size1, arr2, size2);

    // Imprimindo o resultado
    printf("A menor distância entre dois números dos dois arrays é: %d\n", minDistance);

    return 0;
}

comentado
#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <stdlib.h> // Biblioteca padrão para funções utilitárias, como abs()
#include <limits.h> // Biblioteca padrão para limites de inteiros, como INT_MAX

// Função para encontrar a menor distância entre dois arrays
int findMinDistance(int arr1[], int size1, int arr2[], int size2) {
    int minDistance = INT_MAX; // Inicializa a menor distância com o valor máximo possível de um inteiro

    // Loop através de cada elemento do primeiro array
    for(int i = 0; i < size1; i++) {
        // Loop através de cada elemento do segundo array
        for(int j = 0; j < size2; j++) {
            // Calcula a distância absoluta entre os elementos dos dois arrays
            int distance = abs(arr1[i] - arr2[j]);
            // Se a distância calculada for menor que a menor distância encontrada até agora
            if (distance < minDistance) {
                // Atualiza a menor distância
                minDistance = distance;
            }
        }
    }

    return minDistance; // Retorna a menor distância encontrada
}

int main() {
    // Definindo os arrays com tamanho >= 10
    int arr1[] = {-1, 5, 10, 20, 30, 40, 50, 60, 70, 80}; // Array 1 com 10 elementos
    int arr2[] = {26, 6, 15, 25, 35, 45, 55, 65, 75, 85}; // Array 2 com 10 elementos

    // Calcula o tamanho dos arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]); // Tamanho do array 1
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // Tamanho do array 2

    // Encontrando a menor distância entre os dois arrays
    int minDistance = findMinDistance(arr1, size1, arr2, size2);

    // Imprimindo o resultado
    printf("A menor distância entre dois números dos dois arrays é: %d\n", minDistance);

    return 0; // Indica que o programa terminou com sucesso
}
