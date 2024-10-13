#ifndef HEAPSORTFUNCTIONS
#define HEAPSORTFUNCTIONS

#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>
#include <stack>

using namespace std;

// Função para ajustar um heap mínimo
void minHeapify(int arr[], int n, int i) {   
    int menor = i; // Inicializa o menor como a raiz
    int filho_esquerda = 2 * i + 1; // Índice do filho da esquerda
    int filho_direita = 2 * i + 2; // Índice do filho da direita

    // Se o filho da esquerda é menor que a raiz
    if (filho_esquerda < n && arr[filho_esquerda] < arr[menor])
        menor = filho_esquerda;

    // Se o filho da direita é menor que o menor até agora
    if (filho_direita < n && arr[filho_direita] < arr[menor])
        menor = filho_direita;

    // Se o menor não é a raiz
    if (menor != i) {
        // Troca a raiz com o menor
        swap(arr[i], arr[menor]);

        // Recursivamente ajusta o sub-heap afetado
        minHeapify(arr, n, menor);
    }
}


// Função para construir um heap mínimo a partir de um array
void build_min_heap(int arr[], int n) {

    // Começa do último nó não-folha e move para a raiz
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}


// Função principal para realizar o heapsort mínimo
void heapSort(int arr[], int n) {
    build_min_heap(arr, n);
    // Extrair elementos do heap um por um
    for (int i = n - 1; i > 0; i--) {
        // Move a raiz atual para o final 
        swap(arr[0], arr[i]);
        // Chama a função minHeapify na heap reduzida
        minHeapify(arr, i, 0);
    }
}

void printHeap(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int heapMinimum(int arr[])
{
    return arr[0];
}

int heap_extract_min(int arr[], int &n)
{
    int minimo = arr[0];
    arr[0] = arr[n - 1];
    n--;
    minHeapify(arr, n, 0);

    return minimo;
}
void heap_increase_key(int arr[], int i, int chave)
{
    arr[i] = chave;
    while(arr[i] > 0 && arr[(i - 1) / 2] > arr[i])
    {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1)/2;
    }
}

void min_heap_insert(int arr[], int &n, int chave)
{
    int i = n - 1;
    arr[i] = 1000;
    while(i > 0 && arr[(i - 1) / 2] > chave)
    {
        arr[i] = arr[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    arr[i] = chave;
}


#endif