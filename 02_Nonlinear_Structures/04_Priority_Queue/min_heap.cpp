#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;pq.push(10);
    pq.push(30);
    pq.push(20);

    while (!pq.empty()) {
        cout << pq.top() << " "; // 출력: 10 20 30
        pq.pop();
    }

}

//priority_queue<int, ...> : "무엇을 담을 것인가?"
//vector<int> : "데이터를 어디에 저장할 것인가?"
//greater<int> : "누구를 주인공(Top)으로 세울 것인가?"

//pq는 top씀