#include <iostream>
using namespace std;

int N,M;
vector<int> adj[32001];
int indegree[32001];

for (int i=0;i<M;i++) {
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);//a에서 b로 가는 방향선
    indegree[b]++;//b앞에 서야 할 사람 한 명 추가
}

//학생 A가 B앞에 서야 한다면 A에서 B로 가는 화살표가 생김
//이때 B입장에서는 자기에게 들어오는 화살표가 하나 생긴 것이므로
//진입차수가 1 증가함

queue<int> q;
for (int i=1; i<=N; i++) {
    if (indegree[i]==0) {
        q.push(i);
    }
}
//앞에 아무도 안 서도 되는 학생들 먼저 줄세움. 진입 차수 0 인애들


while (!q.empty()) {
    int cur=q.front();
    q.pop();
    cout<<cur<<" ";
    for (int next:adj[cur]) {
        indegree[next]--;
        if (indegree[next]==0) {
            q.push(next);
        }
    }
}