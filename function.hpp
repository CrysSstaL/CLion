#pragma once
#include <iostream>
#include <math.h>

namespace func
{
    // чтение из файла
    void ReadInFile(int& size_i, int& size_j, int matrix[100][100]);

    // работа с данными из файла
    int MinElement(int size_i, int size_j, int matrix[100][100]);

    // поиск простого числа
    bool SearchPrimeDigit(int size_i, int size_j, int matrix[100][100]);

    //поиск минимального элемента
    bool EqualMinElement(int size_i, int size_j, int matrix[100][100]);

    void SWAPPP(int size_i, int size_j, int matrix[100][100]);

    // запись данных в файл
    void WriteToFile(int size_i, int size_j, int matrix[100][100]);
}