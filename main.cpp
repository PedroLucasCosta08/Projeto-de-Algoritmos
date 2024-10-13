#include <iostream>
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
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>


using namespace std;

int main()
{
    int algoritmo, tamanho, tipo;

    do{

        printMenu();
        cin >> algoritmo;
        system("cls");

        if(algoritmo == 15)
            {
                cout << "finalizando o progama!!" << endl;
                system("pause");
                exit(0);
            }else if(algoritmo != 11 && algoritmo != 12 && algoritmo != 13 && algoritmo != 14)
            {
                printMenuTipeEntrance();
                cin >> tipo;

                system("cls");

        
                printMenuSizeEntrance();
                cin >> tamanho;

                if(tamanho == 1 )
                {
                    tamanho = 10;
                }

                if(tamanho == 2 )
                {
                    tamanho = 100;
                }

                if(tamanho == 3 )
                {
                    tamanho = 1000;
                }

                if(tamanho == 4 )
                {
                    tamanho = 10000;
                }

                if(tamanho == 5 )
                {
                    tamanho = 100000;
                }

                if(tamanho == 6 )
                {
                    tamanho = 1000000;
                }

                createFolders(algoritmo);

                int *mainVector = new int[tamanho];

                creatingVectors(mainVector, tamanho, tipo);
                createFiles(tamanho, algoritmo, mainVector, tipo, "Entrada");

                auto start_time = chrono::high_resolution_clock::now();

                chamaFuncoes(algoritmo, mainVector, tamanho);

                auto end_time = chrono::high_resolution_clock::now();
                auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);

                createFiles(tamanho, algoritmo, mainVector, tipo, "Saida");
                CreatePerformance(tamanho, algoritmo, tipo, duration, "Performance");
                desallocVector(mainVector);
            }else
            {
                printMenuTipeEntrance();
                cin >> tipo;
                system("cls");

                cout << "Tamanho desejado: ";
                cin >> tamanho;
                system("cls");

                int *mainVector = new int[tamanho];

                creatingVectors(mainVector, tamanho, tipo);

                cout << "Vetor original: " << endl;
                printHeap(mainVector, tamanho);

                build_min_heap(mainVector, tamanho);
                cout << "Vetor apos build: "<< endl;
                printHeap(mainVector, tamanho);

                if(algoritmo == 11)
                {
                    cout << "Elemento Minimo: " << heapMinimum(mainVector) << endl;
                }
                if(algoritmo == 12)
                {
                    cout << "Menor Elemento: " << heap_extract_min(mainVector, tamanho) << endl;
                    cout << endl << "Vetor Apos a Remocao: " << endl;
                    printHeap(mainVector, tamanho); 
                }
                if(algoritmo == 13)
                {
                    cout << "Digite a posicao desejada: (0 a " << tamanho - 1 << "): " << endl;
                    int indice;
                    cin >> indice;
                    heap_increase_key(mainVector, indice, 1000);
                    cout << "Vetor apos a modificacao: " << endl;
                    printHeap(mainVector, tamanho);
                }
                if(algoritmo == 14)
                {
                    tamanho += 1;
                    int *aux = new int[tamanho];
                    for(int i = 0; i < tamanho - 1; i++)
                    {
                        aux[i] = mainVector[i];
                    }
                    min_heap_insert(aux, tamanho, 1000);
                    
                    cout << "Vetor apos a modificacao: " << endl;
                    printHeap(aux, tamanho);
                }

                system("pause");


            }


        }while(algoritmo != 15);


    return 0;
}
