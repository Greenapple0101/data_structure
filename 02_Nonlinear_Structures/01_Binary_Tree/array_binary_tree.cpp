//순회 완전 코드
#include <iostream>
using namespace std;

int tree[1024];
int N;

//전위순회 나->왼->오
void preOrder(int i) {
	if (i > N || tree[i] == 0)return;

	cout << tree[i] << " "; //나 방문처리
	preOrder(i * 2); //왼쪽 자식 먼저 이동
	preOrder(i * 2 + 1); //오른쪽 자식 그 다음 이동
}

//중위 순회 왼->나->오
void inOrder(int i) {
	if (i > N || tree[i] = 0)return;

	inOrder(i * 2); //왼쪽 자식으로 이동
	cout << tree[i] << " "; //나 방문처리
	inOrder(i * 2 + 1);//오른쪽 자식으로 이동
}

//후위 순회 왼->오->나
void postOrder(int i) {
	if (i > N || tree[i] == 0)return;

	postOrder(i * 2);
	postOrder(i * 2 + 1);
	cout << tree[i] << " ";
}
