#include <iostream>
#include <vector>
#include <algorithm> // sort, fill, unique, remove
#include <cstring>   // memset

using namespace std;

struct Node {
    int id;
    string data;
};

int main() {
    vector<int> v;
    cout<<v.front(); //첫번째
    cout<<v.back(); //마지막
    cout<<v.at(2); //인덱스가 2인애

    v.assign({5,3,1,2,3,4,4}); //새로운 리스트로 덮어쓰기
    fill(v.begin(),v.begin()+2,-1); //처음 2개만 -1로 채우기

    v.resize(10,9); //10으로 크기 늘리고, 빈 곳은 9로 채움
    int size=v.size() //현재 개수
    int capacity=v.capacity() //현재 할당된 공간


}