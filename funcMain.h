#ifndef FUNCMAIN
#define FUNCMAIN
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include "funcoesInsertionSort.h"
#include "funcSelectionSort.h"
#include "funcMain.h"
#include "funcShellSort.h"
#include "filesFunctions.h"
#include "funcBubbleSort.h"
#include "vectorsFunctions.h"
#include "funcQuickSort.h"
#include "funckQuickSort2.h"
#include "funcQuickSort3.h"
#include "funcQuickSort4.h"
#include "funcMergeSort.h"
#include "heapSortFunctions.h"


using namespace std;

void printMenu()
{
    system("cls");
    cout << "\t\t ----MENU----" << endl;
    cout << "Opcoes: " << endl;
    cout << "[1] - Insertion Sort" << endl;
    cout << "[2] - Selection Sort" << endl;
    cout << "[3] - Shell Sort" << endl;
    cout << "[4] - Bubble Sort" << endl;
    cout << "[5] - Merge Sort" << endl;
    cout << "[6] - Quick Sort (Versao 1)" << endl;
    cout << "[7] - Quick Sort (Versao 2)" << endl;
    cout << "[8] - Quick Sort (Versao 3)" << endl;
    cout << "[9] - Quick Sort (Versao 4)" << endl;
    cout << "[10] - Heap Sort" << endl;
    cout << "[11] - Heap Minimo" << endl;
    cout << "[12] - Heap Extract Min" << endl;
    cout << "[13] - Heap Increase Key" << endl;
    cout << "[14] - Min Heap Insert" << endl;
    cout << "[15] - Finalizar Progama" << endl;

    cout << "Operacao Desejada: ";
}



void printMenuTipeEntrance()
{
    system("cls");
    cout << "\t\t ----TIPO ENTRADA----" << endl;
    cout << "Opcoes: " << endl;
    cout << "[1] - Inserir de Forma Crescente" << endl;
    cout << "[2] - Inserir de Forma Decrescente" << endl;
    cout << "[3] - Inserir de Forma Randomica" << endl;
    cout << "Operacao Desejada: ";
}

void printMenuSizeEntrance()
{
    system("cls");
    cout << "\t\t ----TAMANHO ENTRADA----" << endl;
    cout << "Opcoes: " << endl;
    cout << "[1] - 10 Dados" << endl;
    cout << "[2] - 100 Dados" << endl;
    cout << "[3] - 1000 Dados" << endl;
    cout << "[4] - 10000 Dados" << endl;
    cout << "[5] - 100000 Dados" << endl;
    cout << "[6] - 1000000 Dados" << endl;
    cout << "Quantos Dados Deseja Inserir: ";
}

void chamaFuncoes(int qa, int subVetor[], int tam)
{
    if(qa == 1)
        {
            InsertionSort(subVetor, tam);
        }else if(qa == 2)
        {
            selectionSort(subVetor, tam);
        }else if(qa == 3)
        {
            shellSort(subVetor, tam);
        }else if(qa == 4)
        {
            bubbleSort(subVetor, tam);
        }else if(qa == 5)
        {
            mergeSort(subVetor, 0, tam - 1);
        }else if(qa == 6)
        {
            quicksort1(subVetor, 0, tam - 1);
        }else if(qa == 7)
        {
            quicksort2(subVetor, 0, tam - 1);
        }else if(qa == 8)
        {
            quicksort3(subVetor, 0, tam - 1);
        }else if(qa == 9)
        {
            quicksort4(subVetor, 0, tam - 1);
        }else if(qa == 10)
        {
            heapSort(subVetor, tam);
        }




}

#endif
