#include <iostream>
#include <string>
using namespace std;
class Node {
private:
    int id;
public:
    string name;

    Node(int _id, string _name) : id(_id),name(_name) {
        cout<<name<<"노드가 생성되었습니다.\n";
    }

    void showInfo() {
        cout<<"ID :"<<id<<name<<endl;
    }
};

int main() {
    Node* node1=new Node(1,"Root");
    node->showInfo();
    delete node1;
    return 0;

}