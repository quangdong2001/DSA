#include "../include/insertionsort.h"
namespace Sort
{
    /*! @brief declare instance
    */
    template <class U>
    InsertionSort<U>* InsertionSort<U>::instance = nullptr;

    /*! @brief declare mutex lock
    */
    template <class U>
    std::mutex InsertionSort<U>::mtx = std::mutex{};

    /*! @brief instance
    */
    template <class U>
    InsertionSort<U>* InsertionSort<U>::Instance()
    {
        if(instance == nullprt)
            instance = new InsertionSort<U>;
        return instance;
    }

    /*! @brief insertion sort algorithm
    */
    template<class U>
    void InsertionSort<U>::sort(int order)
    {

    }
} // namespace name
