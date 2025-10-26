#include "../include/selectionsort.h"
namespace Sort{
    /*! @brief declare instance static
    */
    template<typename U>
    SelectionSort<U>* SelectionSort<U>::instance = nullptr;
    template<class U>
    std::mutex SelectionSort<U>::mtx = std::mutex{};

    /*! @brief get instance
    */
   template<typename U>
   SelectionSort<U>* SelectionSort<U>::Instance()
   {
        std::unique_lock<std::mutex> lock(mtx);
        if(instance == nullptr)
            instance = new SelectionSort;
        return instance;
   }

   /*! @brief implement selection sort
   */
  template<typename U>
  void SelectionSort<U>::sort(int order)
  {
        for(int i = 0; i < buckets.size() - 1; i++)
        {
            int indexCompare = i;
            for(int j = i + 1; j < buckets.size(); j++)
            {
                if((order == ASCENDING && buckets.at(indexCompare) > buckets.at(j))||
                   (order == DESCENDING && buckets.at(indexCompare) < buckets.at(j)))
                {
                    indexCompare = j;
                }
            }
            if(indexCompare != i)
            {
                U temp = buckets.at(i);
                buckets[i] = buckets.at(indexCompare);
                buckets[indexCompare] = temp;
            }
        }
  }
  template class SelectionSort<float>;
} // namespace Sort

