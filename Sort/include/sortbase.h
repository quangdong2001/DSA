#include <iostream>
#include <vector>
namespace Sort{
template <typename U>
class SortBase
{
public:
    void addCandidate(const U &candidate);
    virtual void sort(int order) = 0;
    void log();
protected:
    std::vector<U> buckets;
};
}