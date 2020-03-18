//
// Created by ybw on 2020/3/18.
//

#ifndef LINEAR_STRUCTURE_LINKED_QUEUE_H
#define LINEAR_STRUCTURE_LINKED_QUEUE_H

#include "chained_list.h"

//可以直接利用基本的链式表构造,
//但是基本的链式表因为只有一个指针的缘故，每次插入不是O(1)的时间复杂度，需要遍历数组，插入最后O(n)
template <class ElementType>
class Linked_Queue {
    friend ostream& operator<<(ostream& os,Linked_Queue<ElementType> res)
    {
        os<<res.myqueue;
        return os;
    }
public:
    Linked_Queue()
        :myqueue()
    {}
    void push(const ElementType X)
    {
        myqueue.push_back(X);
    }

    ElementType pop()
    {
        return myqueue.pop_front();
    }

    int Length(){
        return myqueue.Length();
    }

private:
    chained_list<ElementType> myqueue;
};

template <class ElementType>
class LQNode{
public:
//    QNode(shared_ptr<QNode> ptr1 = nullptr,shared_ptr<QNode> ptr2 = nullptr)
//        :front(ptr1),rear(ptr2)
//    {}
    shared_ptr<Node<ElementType>> front;
    shared_ptr<Node<ElementType>> rear;
};

template <class ElementType>
class Linked_Queue2{
public:
    typedef shared_ptr<Node<ElementType>> ptrNode;
    typedef shared_ptr<LQNode<ElementType>> phead;
    friend ostream& operator<<(ostream& os,Linked_Queue2<ElementType> res)
    {
        for (ptrNode itr = res.head->front; itr != nullptr ; itr=itr->Next) {
            os<<itr->Data<<" ";
        }
//        os<<endl;
        return os;
    }
public:
    Linked_Queue2()
        :head(make_shared<LQNode<ElementType>>())
    {
        head->front = nullptr;
        head->rear = nullptr;
    }
    //入队
    void push(ElementType X)
    {
        ptrNode node = make_shared<Node<ElementType>>(X);
        //队里没有一个元素
        if(head->front == NULL)
            head->front = node;
        else
            head->rear->Next = node;
        head->rear = node;
    }
    //出队
    ElementType pop(){
        //若空
        if(head->front == NULL) {
            cout << "对列为空" << endl;
            return ElementType();   //这个地方应该引用异常机制，暂时用默认构造解决
        }

        auto Dnode = head->front;
        ElementType X = Dnode->Data;
        //若一个
        if(head->front == head->rear)
        {
            head->front = nullptr;
            head->rear = nullptr;
        } else
            //其他情况
            head->front = head->front->Next;

        return X;
    }
    //长度

private:
    phead head;
};



#endif //LINEAR_STRUCTURE_LINKED_QUEUE_H
