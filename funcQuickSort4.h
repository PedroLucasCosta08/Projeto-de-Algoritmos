#ifndef FUNCQUICKSORT4
#define FUNCQUICKSORT4
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>
#include <stack>

using namespace std;


// Fun��o para trocar dois elementos em um array
void swap4(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fun��o para escolher um piv� aleat�rio
int randomPivot(int low, int high) {
    return low + rand() % (high - low + 1);
}

// Fun��o para particionar o array em torno do piv�
int partition4(int arr[], int low, int high) {
    int pivotIndex = randomPivot(low, high);
    int pivot = arr[pivotIndex];
    int i = low;

    swap4(arr[pivotIndex], arr[high]);

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap4(arr[i], arr[j]);
            ++i;
        }
    }

    swap4(arr[i], arr[high]);
    return i;
}

// Fun��o de ordena��o Quicksort sem recurs�o
void quicksort4(int arr[], int low, int high) {
    stack<pair<int, int>> s;
    s.push(make_pair(low, high));

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        low = current.first;
        high = current.second;

        if (low < high) {
            int pivotIndex = partition4(arr, low, high);
            s.push(make_pair(low, pivotIndex - 1));
            s.push(make_pair(pivotIndex + 1, high));
        }
    }
}

#endif
