#ifndef LINKLISTBASE_H
#define LINKLISTBASE_H
#include <iostream>
#include "coredefine.h"
using namespace LinkListCore;
namespace LinkList
{
    template <class U>
    class LinkListBase
    {
        public:
            LinkListBase() = default;
            virtual ~LinkListBase() = default;
        public:
            virtual void push(Position position, U candidate) = 0;
            virtual void pop(Position position) = 0;
            virtual void get(Position position) = 0;
            virtual void browse() = 0;
    };
} // namespace LinkList
#endif
