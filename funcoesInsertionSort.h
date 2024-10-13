#ifndef FUNCOESINSERTIONSORT
#define FUNCOESINSERTIONSORT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void InsertionSort(int subArray[], int tam)
{
    int key, j;
            for(int i = 0; i < 10; i++)
            {
                key = subArray[i];
                j = i - 1;
                while(j > 0 && subArray[j] > key)
                {
                    subArray[1 + j] = subArray[j];
                    j = j - 1;
                }
                subArray[j + 1] = key;

            }
}


#endif // FUNC

