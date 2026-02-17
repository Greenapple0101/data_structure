#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    while (!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

//아무설정 없이 선언하면 값이 클수록 우선순위가 높음
