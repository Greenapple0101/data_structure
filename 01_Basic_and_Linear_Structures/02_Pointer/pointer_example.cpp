#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    int apple=10; //진짜 물건
    int* ptr=&apple; //apple의 주소(&)를 담은 주소록

    cout<<"apple의 값"<<apple;
    cout<<"apple의 주소"<<&apple;
    cout<<"ptr이 담고 있는 주소"<<ptr;
    cout<<"ptr이 가리키는 곳"<<*ptr;

    *ptr=20;
    cout<<apple; //이러면 apple값이 20나옴

    Student* sptr=new Student{"kim",96};
    cout<<(*sPtr).name<<sPtr->name;
    //kim  나올것

    delete sptr;

    return 0;


}