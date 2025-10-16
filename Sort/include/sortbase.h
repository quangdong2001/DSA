#include <iostream>
#include <vector>
namespace Sort{
template <typename U>
class SortBase
{
public:
    typedef enum _OrderType {DESCENDING, ASCENDING}OrderType;
    void addCandidate(const U &candidate);
    void log();
    virtual void sort(int order) = 0;
public:
    std::vector<U> buckets;
};
}