#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    //int*도 아니고 Node* 이건 구조체 덩어리를 가리키는 포인터.
    //자기가 자기와 똑같은 타입을 가리킨다. 이걸 자기 참조 구조체라고 함.
    //나랑 똑같이 생긴 놈 주소 알려달라는 뜻
};

int main() {
    Node* head=nullptr;
    Node* tail=nullptr;
    //현재 head랑 tail은 데이터를 담는 칸 자체가 아니라 그 칸들이 어디에 있는지
    //알려주는 이정표 역할만 하고 있음
    //굳이 자기만의 새로운 데이터를 가질 필요가 없으므로 new로 공간을 만들 필요가 없음

    for (int i=1;i<=10;++i) {
        Node* newNode=new Node{i*10, nullptr};
        if (!head) head=newNode;
        else tail->next=newNode;
        tail=newNode;
        //헤드에 노드 없으면 생성한 노드 주입
        //그 외에는 tail 다음으로 newNode 가리키고
        //리스트가 비어있을 때 첫 번째 노드를 머리로 지정.
        //이미 노드가 있다면, 현재 마지막 노드의 등에 새로운 노드를 업어줌.
        //이름은 사라져도 실체는 주소로 남는다
        //newNode라는 변수는 방이 어딨는지 적어둔 포스트잇일 뿐
        //1번방이 이름을 잃었지만 이미 head랑 tail이 그 주소를 알고 있고,
        //tail->next가 2번 방을 기리키게 연결함
        //newNode는 새노드를 만들어서 줄에 새울때까지만 잠시 사용하는 가이드
    }
    Node* curr=head;
    while (curr != nullptr) {
        cout<<curr->data;
        curr=curr->next;
    }
    while (head != nullptr) {
        Node* temp=head;
        head= head->next;
        delete temp;
    }
    return 0;
}