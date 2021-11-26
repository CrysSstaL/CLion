#include <iostream>
#include "function.hpp"


int main(){
    setlocale(LC_ALL, "RUS");
    int size_i, size_j;
    bool flag = false;
    int matrix[100][100];
    func::ReadInFile(size_i, size_j, matrix);
    if (func::EqualMinElement(size_i, size_j, matrix) && func::SearchPrimeDigit(size_i, size_j, matrix)){
        func::SWAPPP(size_i, size_j, matrix);
    }
    func::WriteToFile(size_i, size_j, matrix);
    return 0;
}
