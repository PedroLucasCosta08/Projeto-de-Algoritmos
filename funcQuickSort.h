#ifndef FUNCquickSort1
#define FUNCquickSort1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>
#include <stack>

using namespace std;


// Função para trocar dois elementos em um array
void swap1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para particionar o array em torno do pivô
int partition1(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; ++j) {
        if (arr[j] < pivot) {
            swap1(arr[i], arr[j]);
            ++i;
        }
    }

    swap1(arr[low], arr[i - 1]);
    return i - 1;
}

// Função de ordenação Quicksort
void quicksort1(int arr[], int low, int high) {
    stack<pair<int, int>> s;
    s.push(make_pair(low, high));

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        low = current.first;
        high = current.second;

        if (low < high) {
            int pivotIndex = partition1(arr, low, high);
            s.push(make_pair(low, pivotIndex - 1));
            s.push(make_pair(pivotIndex + 1, high));
        }
    }
}



#endif
