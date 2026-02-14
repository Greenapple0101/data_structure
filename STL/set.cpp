#include <iostream>
#include <algorithm>
#include <vector>

int tree[1024];
int N = 0;

//특정 노드를 루트로 하는 서브트리의 총 노드 수
//공식:Size=Left_Size+Right_Size+1
int getSize(int i) {
	if (i > N || tree[i] == 0) return 0;
	return getSize(i * 2) + getSize(i * 2 + 1) + 1;
}

//특정 노드에서 가장 깊은 곳까지의 거리
int getHeight(int i) {
	if (i > N || tree[i] == 0) return 0;
	return max(getHeight(i * 2), getHeight(i * 2 + 1) + 1);
}

//리프 노드 개수:자식이 없는 노드의 수
int getLeafCount(int i) {
	if (i > N || tree[i] == 0) return 0;
	if (i * 2 > N&&i * 2 + 1 > N) return 1; //자식이 둘다 범위를 벗어나면 리프
	return getLeafCount(i * 2) + getLeafCount(i * 2 + 1);
}

//레벨 측정:특정 인덱스의 노드가 몇 번째 층에 있는지
int getLevel(int i) {
	int level = 0;
	while (i > 0) {
		i /= 2; //부모로 거슬러 올라감
		level++;
	}
	return level;
}