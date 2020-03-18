//
// Created by ybw on 2020/3/18.
//

#include "Array_Queue.h"

/**
 * 入队
 * @param X 插入元素
 */
template <class ElementType>
void Array_Queue<ElementType>::push(ElementType X){
    if(if_full())
    {
        std::cout<<"对列以满"<<std::endl;
        return;
    }
    //这里需要是取余加
    myqueue->rear = (myqueue->rear + 1) % MAXSIZE;
    myqueue->data[myqueue->rear] = X;

}

/**
 * 出队
 * @tparam ElementType
 * @return 返回出队的元素
 */
template <class ElementType>
ElementType Array_Queue<ElementType>::pop()
{
    if(if_empty())
    {
        std::cout<<"对列为空"<<std::endl;
        return ElementType();
    }

    myqueue->front = (myqueue->front + 1) % MAXSIZE;
    return myqueue->data[myqueue->front];
}

template class Array_Queue<int>;
template class Array_Queue<char>;
template class Array_Queue<std::string>;