#include <ios>
#include <iostream>

int main(){
    int value1 = 50;
    int value2 = 45;

    std:: cout << "The value1 is  : " << value1 <<std:: endl;
    std:: cout << "The value1 is  : " << value2 <<std:: endl;
    std:: cout << std:: endl;

    std:: cout << "Comparisons" <<std:: endl;

    std::cout <<std :: boolalpha;
    std:: cout << " value1 < value2  : " << (value1 < value2) <<std:: endl;
    std:: cout << " value1 <= value2  : " << (value1 <= value2) <<std:: endl;
    std:: cout << " value1 > value2  : " << (value1 > value2) <<std:: endl;
    std:: cout << " value1 >= value2  : " << (value1 >= value2) <<std:: endl;
    std:: cout << " value1 == value2  : " << (value1 == value2) <<std:: endl;
    std:: cout << " value1 != value2  : " << (value1 != value2) <<std:: endl;
    return 0;
}