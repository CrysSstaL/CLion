#include <iostream>
#include "function_for_work.hpp"
#include "cmath"




int main(){
    setlocale(LC_ALL, "RUS");
    long int number;
    int length;
    std::cin >> number;
    func::LengthOfDigit(number, length);
    int numbers[10], k_numbers[10] ;
    func::MaxNumberOnDigit(length, number);
    func::MaxDigitOfNumbers(numbers, k_numbers, length, number);
    func::SumOfDigits(numbers, length);
    return 0;
}