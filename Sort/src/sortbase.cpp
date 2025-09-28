#include "../include/sortbase.h"
namespace Sort
{
    template <typename U>
    void SortBase<U>::addCandidate(const U &candidate)
    {
        buckets.push_back(candidate);
    }
    template <typename U>
    void SortBase<U>::log()
    {
        std::cout << std::endl <<  "Bucket = ";
        for(int i = 0; i < buckets.size(); i++)
        {
            std::cout << buckets.at(i) << " ";
        }
        std::cout << std::endl;
    }
} // namespace Sort
