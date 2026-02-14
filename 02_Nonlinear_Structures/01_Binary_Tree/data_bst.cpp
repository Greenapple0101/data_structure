#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 2048;
int bst[MAX_SIZE] = { 0, };

void insert(int i, int val) {
	if (i >= MAX_SIZE) return;

	if (bst[i] == 0) {
		bst[i] = val;
		return;
	}
	if (val < bst[i]) insert(i * 2, val);
	else if (val > bst[i]) insert(i * 2 + 1, val);
}

//탐색, 값이 위치한 인덱스 반환
int search(int i, int val) {
	if (i >= MAX_SIZE || bst[i] == 0) return -1;
	if (bst[i] == val) return i;

	if (val < bst[i]) return search(i * 2, val);
	return search(i * 2 + 1, val);
}

//최솟값 찾기:가장 왼쪽 끝까지 가기
int getMin(int i) {
	if (bst[i * 2] == 0)return bst[i];
	return getMin(i * 2);
}

//최댓값 찾기:가장 오른쪽 끝까지 가기
int getMax(int i) {
	if (bst[i * 2 + 1] == 0)return bst[i];
	return getMax(i * 2 + 1);
}

//정렬된 출력 bst에서 중위 순회는 무조건 '오름차순'
void printSorted(int i) {
	if (i >= MAX_SIZE || bst[i] == 0)return;
	printSorted(i*2);
	cout << bst[i] << " ";
	printSorted(i * 2 + 1);
}