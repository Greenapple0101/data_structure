#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

int main() {
    Node *a=new Node{10,nullptr};
    Node *b=new Node{20,nullptr};

    a->next=b;
    cout<<a->data<<(*a).data<<b->data<<(*b).data;
    delete a;
    delete b;
    return 0;
}