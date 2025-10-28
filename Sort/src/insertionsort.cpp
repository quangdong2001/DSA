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
        if(instance == nullptr)
            instance = new InsertionSort<U>;
        return instance;
    }

    /*! @brief insertion sort algorithm
    */
    template<class U>
    void InsertionSort<U>::sort(int order)
    {
        int endBudgets = buckets.size();
        int index = 0;
        while (index < endBudgets)
        {
            bool completed = false;
            int indexCompare = index - 1;
            U value = buckets.at(index);
            while (!completed && indexCompare > 0)
            {
                if((order == ASCENDING) && (buckets.at(index) < buckets.at(indexCompare)) ||
                   (order == DESCENDING) && (buckets.at(index) < buckets.at(indexCompare))){
                    indexCompare--;
                }else{
                    completed = true;
                }
            }
            for(int i = index; i > indexCompare; i--)
            {
                buckets[i] = buckets.at(i - 1);
            }
            buckets[indexCompare] = value;
        }
    }
    template class InsertionSort<float>;
} // namespace name
