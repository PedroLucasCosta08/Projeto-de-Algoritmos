#ifndef FILESFUNCTIONS
#define FILESFUNCTIONS
#include <iostream>
#include <vector>
#include <direct.h>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <string>
#include <windows.h>

using namespace std;

void createFiles(int tam, int algoritmo, int subVector[],int tipoEntrada, string momento)
{
    string path;
    string aux;
    ofstream outFile;
    if(algoritmo == 1)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\InsertionSort\\ArquivosDe";
        }else if(algoritmo == 2)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\SelectionSort\\ArquivosDe";
        }else if(algoritmo == 3)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\ShellSort\\ArquivosDe";
        }else if(algoritmo == 4)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\BubbleSort\\ArquivosDe";
        }else if(algoritmo == 5)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\MergeSort\\ArquivosDe";
        }else if(algoritmo == 6)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort1\\ArquivosDe";
        }else if(algoritmo == 7)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort2\\ArquivosDe";
        }else if(algoritmo == 8)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort3\\ArquivosDe";
        }else if(algoritmo == 9)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort4\\ArquivosDe";
        }else if(algoritmo == 10)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\HeapSort\\ArquivosDe";
        }

        path = path + momento;
        path = path + "\\";
        path = path + momento;

        if(tipoEntrada == 1)
            {
                aux = "Crescente";
            }else if(tipoEntrada == 2)
            {
                aux = "Decrescente";
            }else if(tipoEntrada == 3)
            {
                aux = "Randomico";
            }

        path = path + aux;

        aux = to_string(tam);

        path = path + aux;
        path = path + ".txt";


    outFile.open(path);
    outFile << tam << endl;
    if(algoritmo == 10 && momento == "Saida"){
    for(int i = tam - 1; i >= 0; i--)
        {
            outFile << subVector[i] << endl;
        }
    }else{
    for(int i = 0; i < tam; i ++)
        {
            outFile << subVector[i] << endl;
        }
    }
    outFile.close();
}

void CreatePerformance(int tam, int algoritmo, int tipoEntrada, auto subDuration, string momento)
{
    string path;
    string aux;
    ofstream outFile;
    if(algoritmo == 1)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\InsertionSort\\ArquivosDe";
        }else if(algoritmo == 2)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\SelectionSort\\ArquivosDe";
        }else if(algoritmo == 3)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\ShellSort\\ArquivosDe";
        }else if(algoritmo == 4)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\BubbleSort\\ArquivosDe";
        }else if(algoritmo == 5)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\MergeSort\\ArquivosDe";
        }else if(algoritmo == 6)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort1\\ArquivosDe";
        }else if(algoritmo == 7)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort2\\ArquivosDe";
        }else if(algoritmo == 8)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort3\\ArquivosDe";
        }else if(algoritmo == 9)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort4\\ArquivosDe";
        }else if(algoritmo == 10)
        {
            path = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\HeapSort\\ArquivosDe";
        }

        path = path + momento;
        path = path + "\\";
        path = path + momento;

        if(tipoEntrada == 1)
            {
                aux = "Crescente";
            }else if(tipoEntrada == 2)
            {
                aux = "Decrescente";
            }else if(tipoEntrada == 3)
            {
                aux = "Randomico";
            }

        path = path + aux;

        aux = to_string(tam);

        path = path + aux;
        path = path + ".txt";

    outFile.open(path);
    outFile << tam << endl;
    outFile << subDuration.count();
    outFile.close();
}

void createFolders(int algoritmo)
{
    const char* directoryPath;

    if(algoritmo == 1)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\InsertionSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\InsertionSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);


            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\InsertionSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);


        }else if(algoritmo== 2)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\SelectionSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\SelectionSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\SelectionSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 3)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\ShellSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\ShellSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\ShellSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 4)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\BubbleSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\BubbleSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\BubbleSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 5)
        {

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\MergeSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\MergeSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\MergeSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 6)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort1\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort1\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort1\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 7)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort2\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);


            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort2\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort2\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 8)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort3\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort3\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort3\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }else if(algoritmo == 9)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort4\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort4\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\QuickSort4\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }
        else if(algoritmo == 10)
        {
            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\HeapSort\\ArquivosDeEntrada";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\HeapSort\\ArquivosDeSaida";
            CreateDirectory(directoryPath, NULL);

            directoryPath = "C:\\Users\\peluc\\Downloads\\ProjetoPAcode\\NovoProjetoDeAlgoritmos\\HeapSort\\ArquivosDePerformance";
            CreateDirectory(directoryPath, NULL);

        }
}

#endif // FUNC
