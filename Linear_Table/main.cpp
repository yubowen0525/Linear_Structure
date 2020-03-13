#include <iostream>
#include "LinearList.h"
#include "chained_list.h"

#include <string>
using namespace std;

int test_Array_Implementation(){
    LinearList<int> MyList;
    MyList.Insert(1,0);
    MyList.Insert(2,0);
    MyList.Insert(3,0);
    MyList.Insert(4,9);

    for (int i = 0; i < MyList.Length(); ++i) {
        cout<<MyList[i]<<" ";
    }
    cout<<endl;

    MyList.Earse(3);

    for (int i = 0; i < MyList.Length(); ++i) {
        cout<<MyList[i]<<" ";
    }
    cout<<endl;

    cout<<MyList.Find(4)<<endl;
    cout<<MyList.FindKth(3)<<endl;

    LinearList<string> MyList2;
    MyList2.Insert("我是",0);
    MyList2.Insert("大帅逼",0);
    MyList2.Insert("郑薇",0);
    MyList2.Insert("你好",9);

    for (int i = 0; i < MyList2.Length(); ++i) {
        cout<<MyList2[i]<<" ";
    }
    cout<<endl;

    MyList2.Earse(3);

    for (int i = 0; i < MyList2.Length(); ++i) {
        cout<<MyList2[i]<<" ";
    }
    cout<<endl;

    cout<<MyList2.Find("郑薇")<<endl;
    cout<<MyList2.FindKth(3)<<endl;
    return 0;
}

int test_Linked_Implementation()
{
    //修改几点，1 首先是否创建一个空节点，该节点为head;
    //         2 节点的创建可以更改为class,且内嵌shared_ptr。

     chained_list<int> list;
     list.Insert(1,0);
     list.Insert(2,1);
     list.Insert(3,1);
     list.Insert(4,1);
     cout<<list<<endl;
     cout<<list.Length()<<endl;
     list.push_back(5);
     cout<<list<<endl;
     list.Delete(3);
     cout<<list<<endl;
     list.push_front(0);
     cout<<list<<endl;


    chained_list<char> list2;
    list2.Insert('a',0);
    list2.Insert('b',1);
    list2.Insert('c',1);
    list2.Insert('d',1);
    cout<<list2<<endl;
    cout<<list2.Length()<<endl;
    list2.push_back('e');
    cout<<list2<<endl;
    list2.Delete(3);
    cout<<list2<<endl;
    list2.push_front('f');
    cout<<list2<<endl;

    chained_list<string> list3;
    list3.Insert("abcd",0);
    list3.Insert("bcde",1);
    list3.Insert("cdef",1);
    list3.Insert("dhbb",1);
    cout<<list3<<endl;
    cout<<list3.Length()<<endl;
    list3.push_back("i love you");
    cout<<list3<<endl;
    list3.Delete(3);
    cout<<list3<<endl;
    list3.push_front("i hate you");
    cout<<list3<<endl;



}

int main() {
//    test_Array_Implementation();
    test_Linked_Implementation();
    return 0;
}
