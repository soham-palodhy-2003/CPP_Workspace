#include <iostream>

int main(){

    int a {100};
    int b {250};
    int max;
    std::cout<< " Using Regular If else " << std::endl;

    if(a > b)
        max = a;
    else
        max = b;
    
    std::cout << std:: endl;
    std::cout << "Max is : " << max << std::endl;

    //using ternary operators

    max = (a > b) ? a : b;
    std::cout<< " Using ternary operators " << std::endl;
    std::cout << std:: endl;
    std::cout << "Max is : " << max << std::endl;
    return 0;
}