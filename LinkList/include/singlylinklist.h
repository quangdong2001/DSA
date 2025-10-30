#include <iostream>
#include "linklistbase.h"
#include <mutex>
namespace LinkList
{
    template<typename U>
    class SinglyLinkList : public LinkListBase<U>
    {
    private:
        SinglyLinkList() = default;
        virtual ~SinglyLinkList() = default;
        SinglyLinkList(SinglyLinkList&) = delete;
        SinglyLinkList& operator=(SinglyLinkList&) = delete;
    private:
        static SinglyLinkList* instance;
        static std::mutex mtx;
    }
} // namespace LinkLis  