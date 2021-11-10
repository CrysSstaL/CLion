#include "function_for_work.hpp"
#include <iostream>
#include "cmath"

namespace func{
    void LengthOfDigit(long int number, int &length){
        length = 0;
        int k = 0;
        for (int i = 1; i < 10; i++){
            if (number / 10 > 0){
                k+=1;
                number /= 10;
            }
            else{
                length =  k+1;
                break;
            }
        }
    }

    void MaxNumberOnDigit(int length, long int number){
        int max_n = INT_MIN;
        int n = 0;
        double a;
        for (int i = 0; i < length; i++){
            n = (number / pow(10,i));
            a = n % 10;
            if (a > max_n){
                max_n = a;
            }
        }
        std::cout << "Наибольшая цифра в числе (наибольшей) = " << max_n << std::endl;
    }

    void MaxDigitOfNumbers(int numbers[10], int k_numbers[10], int length, long int number){
        int n;
        for (int i = 0; i < length; i++){
            k_numbers[i] = 0;
        }
        for (int i = 0; i < length; i++) {
            bool flag = true;
            n = (number / pow(10, i));
            numbers[i] = n % 10;
            for (int j = 0; j < length; j++){
                //std::cout << j << std::endl;
                if (numbers[j] == (n % 10)){
                    k_numbers[j]+=1;
                    flag = false;
                    break;
                }
            }
            if (flag){
                numbers[i] = n % 10;
                k_numbers[i]+= 1;
            }
        }
        int max_p = 0;
        for (int i = 0; i < length; i++){
            if (k_numbers[i] > max_p){
                max_p = k_numbers[i];
            }
            //std::cout << numbers[i] << " " << k_numbers[i] << std::endl;
        }
        int max_ch = 0;

        for (int i = 0; i < length; i++){
            if (k_numbers[i] == max_p){
                if (numbers[i] > max_ch){
                    max_ch = numbers[i];
                }
            }
        }
        std::cout << "Максимальное число повторений у цифры = " << max_ch << std::endl;
    }

    void SumOfDigits(int numbers[10], int length){
        int sum_d = 0;
        for (int i = 0; i < length; i++){
            sum_d += numbers[i];
        }
        std::cout << "Сумма всех цифр числа = " << sum_d;
    }
};