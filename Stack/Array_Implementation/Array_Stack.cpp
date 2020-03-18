//
// Created by ybw on 2020/3/15.
//

#include "Array_Stack.h"

template <class ElementType>
void Array_Stack<ElementType>::push(ElementType X)
{
    //如果堆栈满那就退出
    if(If_full())
        return;
    //没满加
    ++(mystack->Top);
    mystack->Data[mystack->Top] = X;
}

template <class ElementType>
ElementType Array_Stack<ElementType>::pop()
{
    if(If_empty())
        return ElementType();
    ElementType pop_X = mystack->Data[mystack->Top];
    --(mystack->Top);
    return pop_X;
}

template <class ElementType>
ElementType& Array_Stack<ElementType>::operator[](int index) const
{
    return mystack->Data[index];
}


template class Array_Stack<int>;
template class Array_Stack<char>;
template class Array_Stack<std::string>;
