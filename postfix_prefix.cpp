#include <iostream>

int main(){
    int value = 5;
    //POSTFIX increment
    std:: cout << "Value (incrementing): " << value++ <<std:: endl; //5
    std:: cout << "The value is  : " << value <<std:: endl; //6

    //POSTFIX DECREMENT
    value = 5;

    std:: cout << "Value (decrementing): " << value-- <<std:: endl; //5
    std:: cout << "The value is  : " << value <<std:: endl; //4

    std:: cout << std:: endl;
    
    //PREFIX increment
    value = 5;
    value++;
    std:: cout << "The value is  : " << value <<std:: endl; //6

    //PREFIX DECREMENT
    value = 5;
    value--;
    std:: cout << "The value is  : " << value <<std:: endl; //4
}