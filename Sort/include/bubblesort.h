#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "sortbase.h"
#include <mutex>
namespace Sort{ 
template <typename U>
class BubbleSort : public SortBase<U>
{
private:
    BubbleSort() = default;
    BubbleSort(BubbleSort&) = delete;
    BubbleSort& operator=(BubbleSort&) = delete;
    virtual ~BubbleSort() = default;
public:
    static BubbleSort* Instance();
    void sort(int order) override;
private:
    static BubbleSort* instance;
    static std::mutex mtx;
    using SortBase<U>::buckets;
    using SortBase<U>::ASCENDING;
    using SortBase<U>::DESCENDING;
};
}
#endif
