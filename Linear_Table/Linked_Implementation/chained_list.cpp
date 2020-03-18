//
// Created by ybw on 2020/3/12.
//

#include "chained_list.h"



/**
 * 头插
 * @param X 插入元素
 */
template <class ElementType>
void chained_list<ElementType>::push_front(const ElementType X)
{
    PtrToLNode next = make_shared<Node<ElementType>>(X,head->Next);
    head->Next = next;
    ++size;
}

/**
 * 尾插
 * @param X 插入元素
 */
template <class ElementType>
void chained_list<ElementType>::push_back(const ElementType X)
{
    PtrToLNode p = head;
    PtrToLNode temp = make_shared<Node<ElementType>>(X);
    while(p->Next != nullptr)
       p = p->Next;
    p->Next = temp;
    ++size;
}

/**
 *将元素X插入链式表
 * 1.用s指向一个新节点
 * 2.用p指向链表的第i-1个结点
 *
 * @param X 插入元素
 * @param index 插入位置
 */
template <class ElementType>
void chained_list<ElementType>::Insert(const ElementType X,int index){
    //新节点插入表头
    PtrToLNode next;
    if(index == 0)
    {
        push_front(X);
        return;
    }
    //找到第i-1个节点
    PtrToLNode p = FindKth(index - 1);
    //新节点不是表头
    if(p)
    {
        PtrToLNode next = make_shared<Node<ElementType>>(X,p->Next);
        p->Next = next;
        ++size;
        return;
    } else{
        std::cout<<"节点错误"<<std::endl;
    }

}

/**
 * 查找i索引的节点是否存在
 * @param index 查找的索引位
 * @return 节点地址
 */
template <class ElementType>
shared_ptr<Node<ElementType>> chained_list<ElementType>::FindKth(int index)
{
    PtrToLNode p= head;
    //这里从-1,head开始
    int i = -1;
    for(i ; p->Next != nullptr && i<index;++i)
        p = p->Next;

    if(i == index)
        return p;
    else
        return nullptr;
}

/**
 * 查找元素X是否在链表中存在
 * @param X 元素值
 * @return  索引位置,这个一定要返回地址，返回i毫无意义
 */
template <class ElementType>
shared_ptr<Node<ElementType>> chained_list<ElementType>::Find(ElementType X){
    PtrToLNode p = head;
    while(p && p->Data != X)
    {
       p = p->Next;
    }

    return p;
}


//#define DEBUG
/**
 * 删除节点
 * @param index i索引
 * @return  正确0，失败-1
 */
template <class ElementType>
int chained_list<ElementType>::Delete(int index)
{
    if(index< 0 || index >= Length())
        return ERROR;
    //查找前一个节点地址
    PtrToLNode p = FindKth(index - 1);
    if(!p)
        return ERROR;
#ifdef DEBUG
    auto delete_node = p->Next;
    cout<<"指针数量"<<delete_node.use_count()<<endl;
    p->Next = delete_node->Next;
    cout<<"指针数量"<<delete_node.use_count()<<endl;
    delete_node = nullptr;
    cout<<"指针数量"<<delete_node.use_count()<<endl;
#else
    p->Next = p->Next->Next;
#endif

//    delete_node = nullptr;
    --size;
    return TRUE;
}

template <class ElementType>
ElementType chained_list<ElementType>::pop_front()
{
    PtrToLNode first_node = head->Next;
    if(first_node == nullptr)
        return ElementType();
    ElementType X =  first_node->Data;

    head->Next = first_node->Next;
    return X;
}

template class chained_list<int>;
template class chained_list<char>;
template class chained_list<string>;