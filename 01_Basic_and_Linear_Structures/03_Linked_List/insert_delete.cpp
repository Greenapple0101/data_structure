#include <iostream>
struct Node {
    int data;
    Node* next;
};

void print(Node* h) {
    while (h) {
        cout<<h->data<<" ";
        h=h->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{30,nullptr}}; //10이 30 가리키게

    Node* newNode = new Node{20, nullptr};
    newNode->next=head->next; //새 노드가 30을 가리킴 10->30 에서 20->30 추가
    head->next=newNode; //10이 새 노드를 가리킴 10->20->30 으로 바뀜

    Node* target = head->next;
    head->next=target->next; //지금 노드의 다음이 다다음이 되도록 설정
    delete target; //지금 노드의 다음 삭제

    return 0;
}