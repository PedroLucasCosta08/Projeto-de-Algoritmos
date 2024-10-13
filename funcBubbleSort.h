#ifndef FUNCBUBBLESORT
#define FUNCBUBBLESORT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void bubbleSort(int subArray[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - 1; j++) {
            if (subArray[j] > subArray[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = subArray[j];
                subArray[j] = subArray[j + 1];
                subArray[j + 1] = temp;
                swapped = true;
            }
        }

        // Se nenhum elemento foi trocado nesta iteração,
        // o array está ordenado, e podemos sair antecipadamente.
        if (!swapped) {
            break;
        }
    }
}

#endif

