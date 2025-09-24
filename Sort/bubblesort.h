#include <iostream>
#include <vector>
#include <mutex>
using namespace std;
namespace Sort{ 
template <typename U>
class BubbleSort
{
private:
    BubbleSort() = default;
    BubbleSort(BubbleSort&) = delete;
    BubbleSort& operator=(BubbleSort&) = delete;
    virtual ~BubbleSort() = default;
public:
    static BubbleSort* Instance();
    void addCandidate(const U candidate);
    void sort(int order);
    void print();
private:
    static BubbleSort* instance;
    std::mutex mtx;
    const int ASCENDING = 0;
    const int DESCENDING = 1;
    std::vector<U> buckets;
};
}
