//
// Created by ybw on 2020/3/10.
//

#ifndef LINEAR_LIST_LINEARLIST_H
#define LINEAR_LIST_LINEARLIST_H
#define MAXSIZE 100

#include <iostream>
#include <string>

//typedef int ElementType;
//typedef struct LNode* List;

template <class ElementType>
struct LNode{
    ElementType Data[MAXSIZE];
    int last;   //定义线性表最后一个元素
};

template <class ElementType>
class LinearList {
public:
    LinearList():mylist(new(LNode<ElementType>))
    {
        mylist->last = -1;
    }

    //插入
    void Insert(ElementType x,int index);
    //删除
    void Earse(int index);
    //查找,按值查找，查找 X 第一次出现的下标
    int Find(ElementType X);
    //按序查找,返回下标为 K 的当前值
    ElementType FindKth(int index);
    //获取表长
    int Length();


    ElementType& operator[](int index){
        return mylist->Data[index];
    }

    ~LinearList()
    {
        delete mylist;
        mylist = nullptr;
    }

//    List& get_list(){
//        return mylist;
//    }

private:
    LNode<ElementType>* mylist;
};


template <class ElementType>
inline ElementType LinearList<ElementType>::FindKth(int index)
{
if(index < 0 || mylist->last < index)
{
std::cout<<"越界，L->Data["<<index<<"]不存在元素"<<std::endl;
}
return mylist->Data[index];
}

template <class ElementType>
inline int LinearList<ElementType>::Length()
{
    return mylist->last + 1;
}

//#include "LinearList.cpp"   //为了找到定义的模板函数体
#endif //LINEAR_LIST_LINEARLIST_H
