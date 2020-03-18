#include <iostream>
//#include "LinearList.h"
//#include "chained_list.h"
#include <iostream>
#include <string>
#include <mcheck.h>
#include "Array_Queue.h"
#include "Linked_Queue.h"
//#include "Linked_Stack.h"
using namespace std;

int test_Array_Implementation(){

    cout<<"开始测试数组实现的Queue"<<endl;
    Array_Queue<int> MyQueue;
    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);


    cout<<MyQueue<<endl;

    cout<<MyQueue.pop()<<endl;

    cout<<MyQueue<<endl;
//
    Array_Queue<string> MyQueue2;
    MyQueue2.push("我是");
    MyQueue2.push("大帅逼");
    MyQueue2.push("小白");
    MyQueue2.push("你好");

    cout<<MyQueue2<<endl;

    cout<<MyQueue2.pop()<<endl;

    cout<<MyQueue2<<endl;
    return 0;
}

int test_Linked_Implementation()
{
#if 1
    cout<<"开始测试链表实现的Queue"<<endl;
     Linked_Queue<int> Queue;
     Queue.push(1);
     Queue.push(2);
     Queue.push(3);
     Queue.push(4);
     cout<<Queue<<endl;
     cout<<Queue.Length()<<endl;

     cout<<Queue.pop()<<endl;
     cout<<Queue.pop()<<endl;

     cout<<Queue<<endl;

    Linked_Queue<char> Queue2;
    Queue2.push('a');
    Queue2.push('b');
    Queue2.push('c');
    Queue2.push('d');
    cout<<Queue2<<endl;
    cout<<Queue2.Length()<<endl;
    cout<<Queue2.pop()<<endl;
    cout<<Queue2.pop()<<endl;
    cout<<Queue2<<endl;

    Linked_Queue<string> Queue3;
    Queue3.push("abcd");
    Queue3.push("bcde");
    Queue3.push("cdef");
    Queue3.push("dhbb");
    cout<<Queue3<<endl;
    cout<<Queue3.Length()<<endl;
    cout<<Queue3.pop()<<endl;
    cout<<Queue3<<endl;
#endif
}

void test_Linked2_Implementation()
{
    cout<<"开始测试链表2实现的Queue"<<endl;
    Linked_Queue2<int> LQueue;
    LQueue.push(1);
    LQueue.push(2);
    LQueue.push(3);
    LQueue.push(4);
    cout<<LQueue<<endl;

    cout<<LQueue.pop()<<endl;
    cout<<LQueue.pop()<<endl;

    cout<<LQueue<<endl;

    cout<<LQueue.pop()<<endl;
    cout<<LQueue.pop()<<endl;
    cout<<LQueue<<endl;
    cout<<LQueue.pop()<<endl;

}

int main() {
//    setenv("MALLOC_TRACE", "output", 1);
//    mtrace();
//    test_Array_Implementation();
//    test_Linked_Implementation();
    test_Linked2_Implementation();

//    Node<int>* p =  new Node<int>(1);
//    p->Data = 5;
}
