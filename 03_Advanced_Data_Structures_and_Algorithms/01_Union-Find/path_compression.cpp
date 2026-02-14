int find(int x) {
    if (parent[x] == x) return x;
    // 경로 압축 루트를 부모로 직접 설정
    return parent[x] = find(parent[x]);
}
//되돌아갈때