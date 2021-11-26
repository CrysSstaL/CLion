#include "function.hpp"
#include <math.h>


namespace func {
    void ReadInFile(int& size_i, int& size_j, int matrix[100][100]) {
        std::cin >> size_i >> size_j;
        for (int i = 0; i < size_i; i++){
            for (int j = 0; j < size_j; j++){
                std::cin >> matrix[i][j];
            }
        }
    }
    void WriteToFile(int size_i, int size_j, int matrix[100][100]){
        for (int i = 0; i < size_i; i++){
            std::cout << "Строка" << "    "<< i+1 << "   ";
            for (int j = 0; j < size_j; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    void SWAPPP(int size_i, int size_j, int matrix[100][100]){
        for (int i = 0; i < size_i; i++){
            for (int j = 0; j < size_j-1; j++){
                for (int z = j+1; z < size_j; z++)
                {
                    if (matrix[i][j] < matrix[i][z])
                    {
                        std::swap(matrix[i][j], matrix[i][z]);
                    }
                }
            }
        }
    }


    int MinElement(int size_i, int size_j, int matrix[100][100]){
        int min_el = INT_MAX, k = 0;
        for (int i = 0; i < size_i; i++){
            for (int j = 0; j < size_j; j++){
                if (matrix[i][j] < min_el){
                    min_el = matrix[i][j];
                }
            }
        }
        return min_el;
    }

    bool EqualMinElement(int size_i, int size_j, int matrix[100][100]){
        int k = 0;
        int min_el = MinElement(size_i, size_j, matrix);
        for (int i = 0; i < size_i; i++){
            for (int j = 0; j < size_j; j++){
                if (matrix[i][j] == min_el){
                    k += 1;
                }
            }
        }
        if (k == 2) return true;
        else return false;
    }


    bool SearchPrimeDigit(int size_i, int size_j, int matrix[100][100]) {
        int k = 0;
        bool flag = true;
        for (int i = 0; i < size_i; i++) {
            for (int j = 0; j < size_j; j++) {
                if (abs(matrix[i][j]<2)) {
                    flag = true;
                }
                for (int q = 2; q < sqrt(abs(matrix[i][j])); q++) {
                    if (abs(matrix[i][j]) % q == 0) {
                        flag = false;
                        break;
                    }
                } if (flag){
                    k+=1;
                }
            }
        }
        if (k > 1){
            return true;
        }
        else return false;
    }
}