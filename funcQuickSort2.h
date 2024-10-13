#ifndef FUNCKquickSort2
#define FUNCKquickSort2
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;

void SwitchQS2(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

int findPivot(vector<int> &Array, int low, int high)
{
    int mid = (low + high)/2;

    if(Array[low] > Array[mid])
    {
        SwitchQS2(Array[low], Array[mid]);
    }
    if(Array[low] > Array[high])
    {
        SwitchQS2(Array[low], Array[high]);
    }
    if(Array[mid] > Array[high])
    {
        SwitchQS2(Array[mid], Array[high]);
    }

    SwitchQS2(Array[mid], Array[high - 1]);

    return Array[high - 1];

}


int SplitQS2(vector<int> &Array, int low, int high)
{
    int pivot = findPivot(Array, low, high);
    int i = low;

    for(int j = low; j < high; j++)
    {
        if(Array[j] < pivot)
        {
            SwitchQS2(Array[i], Array[j]);
            i++;
        }
    }

    SwitchQS2(Array[i], Array[high - 1]);
    return i;
}

void quickSortQS2(vector<int> &Array, int low, int high)
{
    if(low < high)
    {
        int PivotPosition = SplitQS2(Array, low, high);
        quickSortQS2(Array, low, PivotPosition - 1);
        quickSortQS2(Array, PivotPosition + 1, high);
    }
}




#endif
