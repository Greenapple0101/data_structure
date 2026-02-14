#include <iostream>
using namespace std;
int parent[100001];
int findParent(int x) {
    if (parent[x]==x)return x;
    return parent[x]=findParent(parent[x]);
}
void unionParent(int a,int b) {
    //각자가 속한 팀의 진짜 대장을 먼저 불러냄
    a=findParent(a);
    b=findParent(b);
    //두 대장이 서로 다르다면 합친다
    //만약 1번대장팀의 4번과 5번대장팀의 7번을 합친다고 할때
    //4번과 7번을 직접 연결하면 족보가 꼬이고 탐색 속도가 느려짐
    //1번 대장과 5번 대장을 직접 연결하면 5번 팀에 속했던
    //모든 팀원들이 자연스럽게 1번 대장 밑으로 들어가게 된다
    if (a<b) parent[b]=a;
    else parent[a]=b;
}
int main() {
    for (int i=1;i<=10;i++) parent[i]=i;
    unionParent(1,2);
    //1과 2의 대장이 1로 같아짐
    return 0;
}

