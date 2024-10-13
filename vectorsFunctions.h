#ifndef VECTORSFUNCTIONS
#define VECTORSFUNCTIONS
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void desallocVector(int* vectorS)
{
    if(vectorS != nullptr)
        {
            delete[] vectorS;
        }
}

int creatingVectors(int secondaryVector[], int sizeV, int type)
{
    if(type == 1)
        {
            int j;
            int *vectorPointer = new int[sizeV];
            vectorPointer[0] = rand();
            secondaryVector[0] = vectorPointer[0];
            j = vectorPointer[0];
            for(int i = 1; i < sizeV; i++)
            {
                j = j + 1;
                vectorPointer[i] = j;
                secondaryVector[i] = vectorPointer[i];
            }
            delete[]vectorPointer;
        }else if(type == 2)
        {
            int vectorStart;
            vectorStart = sizeV + 1;
            secondaryVector[0] = vectorStart;
            for(int i = 1;i < sizeV; i++)
            {
                vectorStart = vectorStart - 1;
                secondaryVector[i] = vectorStart;
            }
        }else if(type == 3)
        {
            int *vectorPointer = new int[sizeV];
            for(int i = 0; i < sizeV; i++)
            {
                vectorPointer[i] = rand();
                secondaryVector[i] = vectorPointer[i];
            }
            delete[]vectorPointer;
        }
}


#endif
