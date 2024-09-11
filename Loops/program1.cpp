#include <iostream>

int main(){

    //For Loop
    for (unsigned int i = 0 ; i < 10 ; ++i) {
        std::cout << i <<" : This is For loop in C++" << std::endl;
    }
    std::cout<< "Loop Done" << std::endl;
    std::cout << std::endl;

    //While Loop
    const size_t COUNT{10};
    size_t i = 0;

    while(i <  COUNT){
        std::cout<< i << " : This is While Loop in C++" << std::endl;
        ++i;
    }
    std::cout<< "Loop Done" << std::endl;
    return 0;
}