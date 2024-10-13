#ifndef FUNCMERGESORT
#define FUNCMERGESORT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>

using namespace std;


void Merge(int Array[], int left, int middle, int right) {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        // Criar arrays temporários
        int* leftArray = new int[n1];
        int* rightArray = new int[n2];

        // Copiar dados para os arrays temporários leftArray[] e rightArray[]
        for (int i = 0; i < n1; i++)
            leftArray[i] = Array[left + i];
        for (int j = 0; j < n2; j++)
            rightArray[j] = Array[middle + 1 + j];

        // Fazer o merge dos arrays temporários para array[left..right]
        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                Array[k] = leftArray[i];
                i++;
            } else {
                Array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        // Copiar os elementos restantes de leftArray[], se houver
        while (i < n1) {
            Array[k] = leftArray[i];
            i++;
            k++;
        }

        // Copiar os elementos restantes de rightArray[], se houver
        while (j < n2) {
            Array[k] = rightArray[j];
            j++;
            k++;
        }

        // Liberar memória alocada dinamicamente
        delete[] leftArray;
        delete[] rightArray;
    }

    void mergeSort(int Array[], int left, int right) {
        if (left < right) {
            // Encontrar o ponto médio do array
            int middle = left + (right - left) / 2;

            // Recursivamente ordenar as duas metades
            mergeSort(Array, left, middle);
            mergeSort(Array, middle + 1, right);

            // Fazer o merge das duas metades ordenadas
            Merge(Array, left, middle, right);
        }
    }



#endif
