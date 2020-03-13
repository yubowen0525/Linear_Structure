//
// Created by ybw on 2020/3/10.
//

#include "LinearList.h"

template <class ElementType>
void LinearList<ElementType>::Insert(ElementType x, int index)
{
    //表满
    if(mylist->last == MAXSIZE-1){
        std::cout<<"表满"<<std::endl;
        return;
    }
    //越界
    if(index < 0 || index > mylist->last + 1)
    {
        std::cout<<"非法越界"<<std::endl;
        return;
    }

    for (int i = mylist->last; i >= index; --i)
        mylist->Data[i + 1] = mylist->Data[i];


    mylist->Data[index] = x;
    ++(mylist->last);
}

template <class ElementType>
void LinearList<ElementType>::Earse(int index)
{
    //越界
    if(index<0 || index > mylist->last + 1)
    {
        std::cout<<"非法越界"<<std::endl;
        return;
    }
    for (int i = index; i < mylist->last; ++i) {
        mylist->Data[i] = mylist->Data[i+1];
    }

    --(mylist->last);
}

template <class ElementType>
int LinearList<ElementType>::Find(ElementType X) {
    int i = 0;
    while (mylist->Data[i] != X && i <= mylist->last)
        ++i;
    if (i > mylist->last)
        return -1;
    else
        return i;
}


//这里控制了一切，只能生成下列的这些模板。
// Explicitly instantiate only the classes you want to be defined.
// In this case I only want the template to work with characters but
// I want to support both char and wchar_t with the same code.
//组织模板代码有三种方式
//1.包含模型（常规写法 将实现写在头文件中）
//2.显式实例化（实现写在cpp文件中，使用template class语法进行显式实例化）
//3.分离模型（使用C++ export关键字声明导出）
template class LinearList<int>;
template class LinearList<std::string>;
//    for (int i = 0; i < Length(); ++i) {
//        if(mylist->Data[i] == X)
//            return i;
//    }

//    std::cout<<"未找到"<<std::endl;
//    return -1;



//inline int LinearList::Length()
//{
//    return mylist->last + 1;
//}