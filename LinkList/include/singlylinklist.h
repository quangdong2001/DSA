#include <iostream>
#include "linklistbase.h"
#include "coredefine.h"
#include <mutex>
using namespace LinkListCore;
namespace LinkList
{
template<typename U>
class SinglyLinkList : public LinkListBase<U>
{
public:
    typedef struct _Node
    {
        Node node*;
        U data;
    }Node;
private:
    SinglyLinkList() = default;
    virtual ~SinglyLinkList() = default;
    SinglyLinkList(SinglyLinkList&) = delete;
    SinglyLinkList& operator=(SinglyLinkList&) = delete;
public:
    void push(Position position, U candidate) override;
    void pop(Position position) override;
    void get(Position position) override;
    void browse() override;
private:
    static SinglyLinkList* instance;
    static std::mutex mtx;
    Node* pHead, pTail;
};
} // namespace LinkLis  