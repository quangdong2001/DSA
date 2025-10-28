#include <iostream>
#include "sortbase.h"
#include <mutex>
namespace Sort
{
    template <class U>
    class InsertionSort : public SortBase<U>
    {
        private:
            InsertionSort() = default;
            virtual ~InsertionSort() = default;
            InsertionSort(InsertionSort&) = delete;
            InsertionSort& operator=(InsertionSort&) = delete;
        public:
            static InsertionSort* Instance();
            void sort(int order) override;
        private:
            static InsertionSort* instance;
            static std::mutex mtx;
            using SortBase<U>::ASCENDING;
            using SortBase<U>::DESCENDING;
            using SortBase<U>::buckets;
    };
} // namespace Sort
