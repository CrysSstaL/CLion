#pragma once
#include <iostream>
#include <math.h>

namespace func
{
    // Считаем длину числа
    void LengthOfDigit(long int number, int &length);

    void MaxNumberOnDigit(int length, long int number);

    void MaxDigitOfNumbers(int numbers[10], int k_numbers[10], int length, long int number);

    void SumOfDigits(int numbers[10], int length);
    // Вывод
}