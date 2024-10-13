#ifndef FUNCquickSort3
#define FUNCquickSort3
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <stack>
#include <algorithm>

using namespace std;

// Função para trocar dois elementos em um array
void swap3(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para encontrar a mediana de três valores
int medianOfThree3(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;

    if (arr[low] > arr[mid])
        swap3(arr[low], arr[mid]);

    if (arr[low] > arr[high])
        swap3(arr[low], arr[high]);

    if (arr[mid] > arr[high])
        swap3(arr[mid], arr[high]);

    return mid;
}

// Função para particionar o array em torno do pivô
int partition3(int arr[], int low, int high) {
    int pivotIndex = medianOfThree3(arr, low, high);
    int pivot = arr[pivotIndex];
    int i = low;

    swap3(arr[pivotIndex], arr[high]);

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap3(arr[i], arr[j]);
            ++i;
        }
    }

    swap3(arr[i], arr[high]);
    return i;
}

// Função de ordenação Quicksort sem recursão
void quicksort3(int arr[], int low, int high) {
    stack<pair<int, int>> s;
    s.push(make_pair(low, high));

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        low = current.first;
        high = current.second;

        if (low < high) {
            int pivotIndex = partition3(arr, low, high);
            s.push(make_pair(low, pivotIndex - 1));
            s.push(make_pair(pivotIndex + 1, high));
        }
    }
}


#endif
