#ifndef COREDEFINE_H
#define COREDEFINE_H   
/*! @brief size of default argument   
*/ 
const int ARGUMENT_NUMBER = 1;

/*! @brief invalid value
*/
const int VALUE_DEFAULT = -1;

/*! @brief option get data
*/
typedef enum _OptionData{
    InvalidDataOption   = 0,
    TerminalOption      = 1,
    KeyboardOption      = 2
}OptionData;

/*! @brief sort typee 
*/
typedef enum _SortType
{
    InvalidSortType = 0,
    BubbleSort      = 1,
    InsertionSort   = 2,
    SelectionSort   = 4,
    MergeSort       = 8,
    QuickSort       = 16
}SortType;

/*! @brief delay time
*/
const int DELAY_TIME = 2000;

/*! @brief clear screen command
*/
const char* CLEAR_COMMAND = "cls";
#endif