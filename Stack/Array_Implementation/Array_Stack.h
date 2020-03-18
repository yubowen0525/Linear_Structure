//
// Created by ybw on 2020/3/15.
//

#ifndef LINEAR_TABLE_ARRAY_STACK_H
#define LINEAR_TABLE_ARRAY_STACK_H

#include <iostream>

#define MAXSIZE 100
//#define ERROR INT16_MIN
//typedef int ElementType;

template <class ElementType>
struct SNode{
    ElementType Data[MAXSIZE];
    int Top;
};

template <class ElementType>
class Array_Stack {
public:
    typedef struct SNode<ElementType>* Stack;
    friend std::ostream& operator<<(std::ostream& os , const Array_Stack<ElementType>& res)
    {
        for (int i = 0; i < res.Length(); ++i) {
            os<<res[i]<<" ";
        }
        return os;
    }
public:
    //初始化
    Array_Stack()
        :mystack(new SNode<ElementType>)
    {
        mystack->Top = -1;
    }
    //加入元素,入栈push
    void push(ElementType X);
    //弹出元素,出栈pop
    ElementType pop();
    //判断堆栈是否为空
    bool If_empty()
    {
        return mystack->Top == -1;
    }
    //判断堆栈是否满
    bool If_full()
    {
        return mystack->Top == MAXSIZE - 1;
    }
    //返回堆栈长度
    int Length() const
    {
        return mystack->Top + 1;
    }
    ~Array_Stack()
    {
        delete mystack;
        mystack = nullptr;
    }

private:
    ElementType& operator[](int index) const;
    Stack mystack;
};








#endif //LINEAR_TABLE_ARRAY_STACK_H
