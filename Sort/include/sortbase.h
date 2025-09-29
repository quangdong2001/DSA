#include <iostream>
#include <vector>
namespace Sort{
template <typename U>
class SortBase
{
public:
    void addCandidate(const U &candidate);
    void log();
    virtual void sort(int order) = 0;
protected:
    std::vector<U> buckets;
};
}