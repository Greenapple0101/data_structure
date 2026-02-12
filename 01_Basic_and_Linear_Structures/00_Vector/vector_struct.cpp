#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
};
//새로운 자료형 생성

int main(){
    vector<Student> v;
    //구조체 배열 생성
    v.push_back({"man", 92});
    v.emplace_back("woman",99);
    //구조체 중괄호 써서 넣기
    for (int i=0;i<v.size();i++) {
        cout<<v[i].name<<endl;
    }
    //v.size는 지금 동적배열이기때문에 size가 들쭉날쭉함. 잘 재야함.
    //.을 뒤에 붙이는건 이미 v[i]자체가 주소가 아니라 객체이기 때문
    return 0;

}