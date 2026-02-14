#include <iostream>
#include <vector>
using namespace std;
int parent[1000001];
int findParent(int x) {
    //루트 노드가 아니라면, 루트 노드를 찾을 때까지 재귀적으로 호출한다
    if (parent[x]==x) return x;
    //parent 배열은 각 번호의 직속 부모가 누구인지 저장함.
    //만약 parent[x]==x라면 x번은 누구밑에 있는 게 아니라 자기 자신이 그 팀의 대장이라는 뜻.
    //더 찾을 필요가 없으니 x반환하고 끝.
    return parent[x]=findParent(parent[x]);
    //그냥 return findParent(parent[x]);라고 써도 대장은 찾을 수 있지만
    //앞에 parent[x]=를 붙이는 이유는 지름길을 만들기 위해서.
    //만약 100번 노드의 대장이 1이라고 하면, 중간에 50번, 10번 부모가 껴있으면
    //100->50->10->1 순서로 대장을 찾아냄
    //다음에 100번의 대장을 찾을 때 또 50번, 10번을 거쳐야 함.
    //경로를 압축하면 100번의 부모를 아예 1번으로 바꿔버림. 다음번에는 중간과정 없이
    //한번에 대장을 찾음
}
//경로 압축을 이용한 find함수
int main() {
    for (int i=0;i<=5;i++)parent[i]==i;
    return 0;
}

//    return parent[x]=findParent(parent[x]);
//이때 돌아오면서 모든 자식들의 parent[x]를 진짜 대장으로 갈아끼움
//findParent(parent[x])가 대장으로 계속 갱신될테니까
