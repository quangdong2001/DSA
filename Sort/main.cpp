#include <iostream>
#include <coredefine.h>
#include <bubblesort.h>
#include <vector>
#include <chrono>
#include <windows.h>
using namespace std::chrono;
int main(int argc, const char* argv[]) {
    int dataOption = VALUE_DEFAULT, sortTypeOption = VALUE_DEFAULT;
    int sizeInputData = VALUE_DEFAULT;
    std::vector<void> budgets;
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
        std::cout << "Enter size of input data: size = ";
        std::cin >> sizeInputData;
        if(sizeInputData < EMPTY)
            return;
        for(int i = 0; i < sizeInputData; i++)
        {
            int value = VALUE_DEFAULT;
            std::cout << "InputData at " << i << " = ";
            std::cin >> budgets[i];
        }
    }else if(dataOption & TerminalOption){
        if(argc == ARGUMENT_NUMBER)
            return;
        for(int i = 1; i < argc--; i++)
        {
            budgets[i] = *(argv + i);
        }
    }else{
        // TODO: Dongnq
    }
    // Dongnq: 251019: checking dataOption (S)

    // Dongnq: 251019: choose sort option (S)
        std::cout << "Choosing Sort Type Option~" << std::endl;
        std::cout << "1. Bubble Sort" << std::endl;
        std::cout << "2. Insertion Sort" << std::endl;
        std::cout << "3. Selection Sort" << std::endl;
        std::cout << "4. Merge Sort" << std::endl;
        std::cout << "5. Quick Sort" << std::endl;
        std::cin >> sortTypeOption;
        if((sortTypeOption & InvalidSortType) == InvalidSortType)
        {
            Sleep(DELAY_TIME);
            system("cls");
            goto InitScreen; 
        }
        // Dongnq: 251019: choose sort option (E)
    std::cout << "Cmake and sort comparision END~" << std::endl;
    return 0;
}