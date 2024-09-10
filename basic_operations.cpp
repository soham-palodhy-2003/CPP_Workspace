#include <iostream>

int main(){
    //addition
    int num1{10};
    int num2{5};

    int result_add = num1 + num2;
    std:: cout << "Result : " << result_add << std:: endl;

    int result_sub = num1 - num2;
    std:: cout << "Result : " << result_sub << std:: endl;

    int result_mul = num1 * num2;
    std:: cout << "Result : " << result_mul << std:: endl;

    int result_div = num1 / num2;
    std:: cout << "Result : " << result_div << std:: endl;

    int result_mod = num1 % num2;
    std:: cout << "Result : " << result_mod << std:: endl;
    

    return 0;
}