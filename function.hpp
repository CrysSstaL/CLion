#pragma once
#include <iostream>
#include <math.h>

namespace func
{
    // ������ �� �����
    void ReadInFile(int& size_i, int& size_j, int matrix[100][100]);

    // ������ � ������� �� �����
    int MinElement(int size_i, int size_j, int matrix[100][100]);

    // ����� �������� �����
    bool SearchPrimeDigit(int size_i, int size_j, int matrix[100][100]);

    //����� ������������ ��������
    bool EqualMinElement(int size_i, int size_j, int matrix[100][100]);

    void SWAPPP(int size_i, int size_j, int matrix[100][100]);

    // ������ ������ � ����
    void WriteToFile(int size_i, int size_j, int matrix[100][100]);
}