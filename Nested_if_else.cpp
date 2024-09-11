#include <iostream>

int main() {
    
    bool red = false;
    bool green = true;
    bool yellow = false;
    bool police_stop = false;
    
    /*
    if(red){
        std::cout << "STOP!" <<std::endl;
    }
    else if (green) {
        std::cout << "You Can Go Now" <<std::endl;
    }
    else if(yellow){
        std::cout << "SLOW DOWN!" <<std::endl;
    }
    */

    std::cout<<std::endl;

    std::cout<< "Police Stops" << std::endl;
    if(green){
        if(police_stop){
            std::cout << "STOP!" <<std::endl;
        }
        else{
            std::cout << "GO" <<std::endl;
        }
    }
return 0;
}