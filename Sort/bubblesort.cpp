#include <iostream>
#include <mutex>
#include <vector>
const int ARGUMENT_NUMBER = 1;
template <typename U>
class BubbleSort
{
private:
    BubbleSort() = default;
    virtual ~BubbleSort() = default;
public:
    static BubbleSort* Instance()
    {
        std::unique_lock<std::mutex> lock(mtx);
        if(instance == nullptr)
            instance = new BubbleSort;
        return instance;
    }
    void addCandidate(const U candidate)
    {
        buckets.push_back(candidate);
    }
    void sort(int order)
    {
        for(int i = 0; i < buckets.size - 1; i++)
            for(int j = 0; j < buckets.size - 1 - i; j++)
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
    void print()
    {
        std::cout << std::endl <<  "Bucket = ";
        for(int i = 0; i < buckets.size(); i++)
        {
            std::cout << buckets.at(i) << " ";
        }
        std::cout << std::endl;
    }
private:
    static BubbleSort* instance;
    static std::mutex mtx;
    const int ASCENDING = 0;
    const int DESCENDING = 1;
    std::vector<U> buckets;
};
template <typename U>
BubbleSort<U>* BubbleSort<U>::instance = nullptr;
template <typename U>
std::mutex BubbleSort<U>::mtx = std::mutex{};
int main(int argc, const char* argv[])
{
    int option;
    std::cout << "Option" << std::endl;
    std::cout << "1. Input array from terminal" << std::endl;
    std::cout << "2. Input array from keyboard" << std::endl;
    std::cout << "Your option = ";
    std::cin >> option;
    if(argc != ARGUMENT_NUMBER)
    {
        std::cout << "---------- Show Argument ------------ (S)" << std::endl;
        std::cout << "Number of parameter = " << argc << std::endl;
        for(int i = 0; i < argc; i++)
        {
            std::cout << "Parameter " << i + 1 << " = " << *(argv + i) << std::endl;
        }
        std::cout << "---------- Show Argument ------------ (E)" << std::endl;
    }
    return 0;
}