//
// Created by ybw on 2020/3/15.
//

#ifndef LINEAR_TABLE_LINKED_STACK_H
#define LINEAR_TABLE_LINKED_STACK_H

#include "chained_list.h"
//不继承是因为并不构成is的语义，所以采用复用的形式
//栈的链表存储实现    完全利用  链式表  来实现
template <class ElementType>
class Linked_Stack {
public:
    friend ostream& operator<<(ostream& out,const Linked_Stack<ElementType>& orig)
    {
        out<<orig.mystack;
        return out;
    }

public:
    Linked_Stack()
        :mystack()
    {}

    void push(const ElementType X)
    {
        mystack.push_front(X);
    }

    ElementType pop()
    {
        return mystack.pop_front();
    }

    int Length()
    {
        return mystack.Length();
    }

private:
    chained_list<ElementType> mystack;
};


#endif //LINEAR_TABLE_LINKED_STACK_H
