#include <vector>
#include <iostream>
using namespace std;
//둘다 2차원 배열이긴 한데 뭐가 다를까?

int main() {
    vector<vector<int>> 2D;
    2D.push_back({1,2,3});
    2D.push_back({4,5});
    //행은 지금 자유롭게 추가 삭제 가능함
    //그냥 그대로 추가하시면 돼요
    //근데 출력할 때 이중포문으로 출력해야함. .size() 이거 이용하면 됨
    for (const auto& row:2D) {
        for (int val:row) {
            cout<<val<<" ";
        }
    }
    //const는 바꾸지 않겠다
    //&는 참조. 데이터를 복사하지 않고 원본의 위치만 가져오겠다. 주소만 가져오겠다
    //auto는 타입추론

    vector<int> adj[10];
    adj[0].push_back(1);
    adj[1].push_back(2);



}