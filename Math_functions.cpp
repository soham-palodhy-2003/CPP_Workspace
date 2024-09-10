#include <iostream>
#include <cmath>

int main(){

    double weight { 7.7 };

    //floor
    std::cout<<"Weight rounded to floor is: " <<std::floor(weight)<<std::endl;

    //ceiling
    std::cout<<"Weight rounded to ceil is: " <<std::ceil(weight)<<std::endl;

    //abs
    double savings {-5000};

    std::cout<<"Abs of weight is: " <<std::abs(weight)<<std::endl;
    std::cout<<"Abs of savings is: " <<std::abs(savings)<<std::endl;

    //exp : exponential f(x) = e^x
    double exponential = std::exp(10);
    std::cout<<"The exponential of 10 is:"<< exponential<<std::endl;

    //pow
    std::cout<<"5 ^ 4 is:" <<std::pow(5,4)<<std::endl;
    std::cout<<"9 ^ 3 is:" <<std::pow(9,3)<<std::endl;

    //sqrt
    std::cout<<"square root of 81 is: "<<std::sqrt(81)<<std::endl;

    //round
    std::cout<<"3.6547 is rounded to : " <<std::round(3.6547)<<std::endl;
    std::cout<<"3.6 is rounded to : " <<std::round(3.6)<<std::endl;
    std::cout<<"2.5 is rounded to : " <<std::round(2.5)<<std::endl;

    return 0;
}