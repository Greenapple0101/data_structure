#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Edge {
    int u,v,dist;
    bool operator<(const Edge& other) const {
        return dist <other.dist;
    }
};
//bool은 참 아니면 거짓이라는 뜻. 정렬할 때 a가 b보다 앞에 오느냐 묻는것
//operater <: 작다라는 기호의 기능을 새로 정의 하겠다는 약속
//(const Edge& other) 비교 대상인 다른 간선
//return cost<other.cost 내 비용이 쟤 비용보다 작으면 내가 앞순서라고 말하는 로직

int p[100001];
int findP(int x) {
    if (p[x]==x) return x;
    return p[x]=findP(p[x]);
}

void unionP(int a, int b) {
    a=findP(a);
    b=findP(b);
    if (a!=b) p[a]=b;
} //이건 그냥 루트를 b로 합치겠다는 뜻

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int V,E;
    cin>>V>>E;
    //V는 그래프를 이루는 구성 요소인 정점 노드
    //E는 정점과 정점을 잇는 선
    vector<Edge> edges;
    for (int i=1;i<=V; i++) p[i]=i;
    for (int i=0;i<E;i++) {
        int u,v,d;
        cin>>u>>v>>d;
        edges.push_back({u,v,d});
    }
    sort(edges.begin(),edges.end());

    int ans=0, cnt=0;
    for (auto& e:edges) {
        if (findP(e.u) !=findP(e.v)) {
            unionP(e.u,e.v);
            ans+=e.dist;
            if (++cnt==V-1)break;
        }
    }//가중치가 가장 짧은 간선부터 확인. 그리디 방식의 핵심
    //부모가 같이 않으면 끝노드 밑으로 넣고 거리를 더함.
    //break는 이미 V-1개의 선을 다 뽑아서 모든 점이 연결됐으니
    //남은 더 비싼 선들은 볼 필요도 없다고 일찍 끝내는 최적화.
    cout<<ans;
    return 0;
}