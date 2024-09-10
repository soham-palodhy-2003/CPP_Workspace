#include <iostream>

int main(){
    int value = 50;
    
    std:: cout << "The value is  : " << value <<std:: endl; //6
    std:: cout << std:: endl;
    
    value += 5;
    std:: cout << "The value is (after +=5)  : " << value <<std:: endl; //4
    std:: cout << std:: endl;

    value -= 5;
    std:: cout << "The value is (after -=5)  : " << value <<std:: endl; //4
    std:: cout << std:: endl;

    value *= 2;
    std:: cout << "The value is (after *=2) : " << value <<std:: endl; //4
    std:: cout << std:: endl;

    value /= 5;
    std:: cout << "The value is (after /=5) : " << value <<std:: endl; //4
    std:: cout << std:: endl;

    value %= 10;
    std:: cout << "The value is (after %=10)  : " << value <<std:: endl; //4
    std:: cout << std:: endl;
    
}