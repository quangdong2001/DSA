#include "../include/bubblesort.h"
namespace Sort{
    template <typename U>
    BubbleSort<U>* BubbleSort<U>::instance = nullptr;
    template <typename U>
    std::mutex BubbleSort<U>::mtx = std::mutex{};
    template <typename U>
    BubbleSort<U>* BubbleSort<U>::Instance()
    {
        std::unique_lock<std::mutex> lock(mtx);
        if(instance == nullptr)
            instance = new BubbleSort;
        return instance;
    }
    template <typename U>
    void BubbleSort<U>::sort(int order)
    {
        for(int i = 0; i < buckets.size() - 1; i++)
            for(int j = 0; j < buckets.size() - 1 - i; j++)
            {

                if(((buckets.at(j) > buckets.at(j + 1)) && order == ASCENDING) ||
                ((buckets.at(j) < buckets.at(j + 1)) && order == DESCENDING))
                {
                    U temporary = buckets.at(j);
                    buckets[j] = buckets[j+1];
                    buckets[j+1] = temporary;
                }
            }
    }
    template class BubbleSort<float>;
} // namespace Sort