#include <iostream>
//#include "LinearList.h"
//#include "chained_list.h"
#include <iostream>
#include <string>
#include "Array_Stack.h"
#include "Linked_Stack.h"
using namespace std;

int test_Array_Implementation(){

    cout<<"开始测试数组实现的Stack"<<endl;
    Array_Stack<int> MyStack;
    MyStack.push(1);
    MyStack.push(2);
    MyStack.push(3);
    MyStack.push(4);


    cout<<MyStack<<endl;

    cout<<MyStack.pop()<<endl;

    cout<<MyStack<<endl;

    Array_Stack<string> MyStack2;
    MyStack2.push("我是");
    MyStack2.push("大帅逼");
    MyStack2.push("小白");
    MyStack2.push("你好");

    cout<<MyStack2<<endl;

    cout<<MyStack2.pop()<<endl;

    cout<<MyStack2<<endl;
    return 0;
}

int test_Linked_Implementation()
{
#if 1
    cout<<"开始测试链表实现的Stack"<<endl;
     Linked_Stack<int> Stack;
     Stack.push(1);
     Stack.push(2);
     Stack.push(3);
     Stack.push(4);
     cout<<Stack<<endl;
     cout<<Stack.Length()<<endl;

     cout<<Stack.pop()<<endl;
     cout<<Stack.pop()<<endl;

     cout<<Stack<<endl;

    Linked_Stack<char> Stack2;
    Stack2.push('a');
    Stack2.push('b');
    Stack2.push('c');
    Stack2.push('d');
    cout<<Stack2<<endl;
    cout<<Stack2.Length()<<endl;
    cout<<Stack2.pop()<<endl;
    cout<<Stack2.pop()<<endl;
    cout<<Stack2<<endl;

    Linked_Stack<string> Stack3;
    Stack3.push("abcd");
    Stack3.push("bcde");
    Stack3.push("cdef");
    Stack3.push("dhbb");
    cout<<Stack3<<endl;
    cout<<Stack3.Length()<<endl;
    cout<<Stack3.pop()<<endl;
    cout<<Stack3<<endl;
#endif
}

int main() {
    test_Array_Implementation();
    test_Linked_Implementation();
    return 0;
}
