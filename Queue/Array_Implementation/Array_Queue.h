//
// Created by ybw on 2020/3/18.
//
#include <iostream>
#ifndef LINEAR_STRUCTURE_ARRAY_QUEUE_H
#define LINEAR_STRUCTURE_ARRAY_QUEUE_H
#define MAXSIZE 100
//typedef int ElementType;
//typedef struct QNode* Queue;

template <class ElementType>
struct QNode{
    ElementType data[MAXSIZE];
    int front;  //记录队头，用来出队
    int rear;   //记录队尾，用于入队
};

template <class ElementType>
class Array_Queue {
public:
    typedef struct QNode<ElementType>* Queue;
    friend std::ostream& operator<<(std::ostream& os , const Array_Queue<ElementType>& res)
    {
        for (int i = res.myqueue->front + 1; i <= res.myqueue->rear; i = (i+1)%MAXSIZE) {
            os<<res.myqueue->data[i]<<" ";
        }
        return os;
    }
public:
    Array_Queue()
        :myqueue(new QNode<ElementType>)
    {
        myqueue->front = -1;
        myqueue->rear = -1;
    }

    //入队
    void push(ElementType X);
    //出队
    ElementType  pop();

    //判断队列是否已满
    bool if_full()
    {
        return (myqueue->rear + 1 % MAXSIZE) == myqueue->front;
    }
    //判断队列是否为空
    bool if_empty()
    {
        return (myqueue->rear % MAXSIZE) == myqueue->front;
    }

    ~Array_Queue()
    {
        delete myqueue;
        myqueue = nullptr;
    }
private:
    Queue myqueue;

};


#endif //LINEAR_STRUCTURE_ARRAY_QUEUE_H
