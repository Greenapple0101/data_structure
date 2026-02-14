#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* first = new Node{10, nullptr, nullptr};
    Node* second= new Node{20,first,nullptr};
    //second의 prev가 first로 들어감.
    first->next=second;

    cout<<"정방향"<<first->data<<first->next->data;
    cout<<"역방향"<<second->data<<second->prev->data;
    //10 출력될것

    delete second;
    delete first;
    return 0;
}