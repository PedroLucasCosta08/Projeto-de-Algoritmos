#ifndef FUNCSELECTIONSORT
#define FUNCSELECTIONSORT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void selectionSort(int subArray[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        // Encontra o �ndice do menor elemento na parte n�o ordenada
        for (int j = i + 1; j < size; j++) {
            if (subArray[j] < subArray[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o elemento m�nimo com o primeiro elemento da parte n�o ordenada
        if (minIndex != i) {
            swap(subArray[i], subArray[minIndex]);
        }
    }
}


#endif
