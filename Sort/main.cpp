#include <iostream>
#include "bubblesort.h"
const int ARGUMENT_NUMBER = 1;
int main(int argc, const char* argv[]) {
    int option;
    std::cout << "Option" << std::endl;
    std::cout << "1. Input array from terminal" << std::endl;
    std::cout << "2. Input array from keyboard" << std::endl;
    std::cout << "Your option = ";
    std::cin >> option;
    if(argc != ARGUMENT_NUMBER)
    {
        std::cout << "---------- Show Argument ------------ (S)" << std::endl;
        std::cout << "Number of parameter = " << argc << std::endl;
        for(int i = 0; i < argc; i++)
        {
            std::cout << "Parameter " << i + 1 << " = " << *(argv + i) << std::endl;
        }
        std::cout << "---------- Show Argument ------------ (E)" << std::endl;
    }   
    return 0;
}