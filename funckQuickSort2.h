#ifndef FUNCKquickSort2
#define FUNCKquickSort2
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>
#include <stack>

using namespace std;


// Função para trocar dois elementos em um array
void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para encontrar a mediana de três valores
int medianOfThree2(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;

    if (arr[low] > arr[mid])
        swap2(arr[low], arr[mid]);

    if (arr[low] > arr[high])
        swap2(arr[low], arr[high]);

    if (arr[mid] > arr[high])
        swap2(arr[mid], arr[high]);

    return mid;
}

// Função para particionar o array em torno do pivô
int partition2(int arr[], int low, int high) {
    int pivotIndex = medianOfThree2(arr, low, high);
    int pivot = arr[pivotIndex];
    int i = low;

    swap2(arr[pivotIndex], arr[high]);

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap2(arr[i], arr[j]);
            ++i;
        }
    }

    swap2(arr[i], arr[high]);
    return i;
}

// Função de ordenação Quicksort
void quicksort2(int arr[], int low, int high) {
    stack<pair<int, int>> s;
    s.push(make_pair(low, high));

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        low = current.first;
        high = current.second;

        if (low < high) {
            int pivotIndex = partition2(arr, low, high);
            s.push(make_pair(low, pivotIndex - 1));
            s.push(make_pair(pivotIndex + 1, high));
        }
    }
}


#endif
