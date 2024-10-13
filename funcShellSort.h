#ifndef FUNCSHELLSORT
#define FUNCSHELLSORT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void shellSort(int subArray[], int size) {
    // Define as lacunas iniciais
    for (int gap = size / 2; gap > 0; gap /= 2) {
        // Realiza o insertion sort para cada sublista com a lacuna atual
        for (int i = gap; i < size; i++) {
            int temp = subArray[i];
            int j;

            for (j = i; j >= gap && subArray[j - gap] > temp; j -= gap) {
                subArray[j] = subArray[j - gap];
            }

            subArray[j] = temp;
        }
    }
}

#endif
