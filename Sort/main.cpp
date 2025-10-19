#include <iostream>
#include <coredefine.h>
#include <bubblesort.h>
#include <chrono>
#include <windows.h>
using namespace std::chrono;
int main(int argc, const char* argv[]) {
    int dataOption = VALUE_DEFAULT, sortTypeOption = VALUE_DEFAULT;
InitScreen:
    std::cout << "Choosing Data Option~" << std::endl;
    std::cout << "1. Input array from terminal" << std::endl;
    std::cout << "2. Input array from keyboard" << std::endl;
    // Dongnq: 251019: choose data option (S)
    std::cout << "Your data option = ";
    std::cin >> dataOption;
    if((dataOption & InvalidDataOption) == InvalidDataOption)
    {
        std::cout << "Invalid option~" << std::endl;
        Sleep(DELAY_TIME);
        system("cls");
        goto InitScreen; 
    }
    // Dongnq: 251019: choose data option (E)

    // Dongnq: 251019: checking dataOption (S)
    if(dataOption & KeyboardOption){
        // Dongnq: 251019: choose sort option (S)
        std::cout << "Choosing Sort Type Option~" << std::endl;
        std::cout << "1. Bubble Sort~" << std::endl;
        std::cin >> sortTypeOption;
        if((sortTypeOption & InvalidSortType) == InvalidSortType)
        {
            Sleep(DELAY_TIME);
            system("cls");
            goto InitScreen; 
        }
        // Dongnq: 251019: choose sort option (E)
    }else if(dataOption & TerminalOption){
        
    }else{
        // TODO: Dongnq
    }
    // Dongnq: 251019: checking dataOption (S)

    if(argc != ARGUMENT_NUMBER){
            std::cout << "---------- Show Argument ------------ (S)" << std::endl;
            std::cout << "Number of parameter = " << argc << std::endl;
            for(int i = 0; i < argc; i++)
            {
                std::cout << "Parameter " << i + 1 << " = " << *(argv + i) << std::endl;
            }
            std::cout << "---------- Show Argument ------------ (E)" << std::endl;
        }else{
            std::cout << "Data is empty~" << std::endl;
        } 
    std::cout << "Cmake and sort comparision END~" << std::endl;
    return 0;
}