#include <iostream>
#include <mutex>
#include <sortbase.h>
namespace Sort
{
    template<class U>
    class SelectionSort : public Sort<U>
    {
        private:
            SelectionSort() = default;
            virtual ~SelectionSort() = default;
            SelectionSort(SelectionSort&) = delete;
            SelectionSort& operator=(SelectionSort&) = delete;
        public:
            static SelectionSort* Instance();
            void sort(int order) override;
        private:
            static SelectionSort *instance;
            static std::mutex mtx;
            using SortBase<U>::ASCENDING;
            using SortBase<U>::DESCENDING;
            using SortBase<U>::buckets;
    };
}