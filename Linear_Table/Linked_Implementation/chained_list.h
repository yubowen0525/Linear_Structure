//
// Created by ybw on 2020/3/12.
//

#ifndef LINEAR_LIST_CHAINED_LIST_H
#define LINEAR_LIST_CHAINED_LIST_H

#include <iostream>
#include <memory>
#include <string>

using namespace std;

#define ERROR 1;
#define TRUE 0;
//typedef struct Node *PtrToLNode;


//struct Node;

//typedef int ElementType;
//typedef shared_ptr<Node> PtrToLNode;

template <class ElementType>
class Node {
public:
    Node(){}
    Node(ElementType val, std::shared_ptr<Node> n = nullptr):Data(val),Next(n){}
    ElementType Data;
    shared_ptr<Node> Next;
};

template <class ElementType>
class chained_list {
public:
    typedef shared_ptr<Node<ElementType>> PtrToLNode;
    //输出整个链表
    friend ostream& operator<<(ostream& out,const chained_list<ElementType>& orig)
    {
        auto p = orig.head->Next;
        for(;p.get();p = p.get()->Next)
            out<<p.get()->Data<<" ";
        return out;
    }
public:
    //初始化链表
    chained_list()
        :head(make_shared<Node<ElementType>>()),size(0)
    {
    }
    void push_back(const ElementType X);
    void push_front(const ElementType X);
    //插入，//将 X 插入到第 i-1(i>0) 个结点之后
    void Insert(const ElementType X,int index);
    //以遍历链表的方法求链表长度
    int Length();
    // 按序号查找
    PtrToLNode FindKth(int index);
    // 按值查找
    PtrToLNode Find(ElementType X);
    // 删除第 i(i>0) 个结点
    int Delete(int index);
    // 输出链表元素

private:
    PtrToLNode head;
    size_t size;
};

template <class ElementType>
inline int chained_list<ElementType>::Length(){
    return size;
}


#endif //LINEAR_LIST_CHAINED_LIST_H
