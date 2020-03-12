#include <iostream>
#include "LinearList.h"

#include <string>
using namespace std;


int main() {
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
