#include <iostream>
#include <string>
using namespace std;
struct NodeP {
    int data;
    Node* next;
};
//*이 선언할때는 주소만 담는 특수 포인터. *이 사용할때는 주소를 찾아가서 물건에 접근하는거.
//&는 물건에서 주소를 알아내는거 *는 주소에서 물건을 찾아내는거
//int* 는 주소록. *ptr은 주소록보고가서 물건 소환하기
//ptr->은 *찾아가서 .꺼내기를 한번에 하기

int main() {
    Node* node1=new Node;
    node1->data=10;
    node1->next=nullptr;
    //node1이 주소고. 그 주소에서 data 빼내왔더니 10 선언되어 있고.
    //그 주소에서 next는 아직이고
    Node* node2=new Node;
    node2->data=20;
    node2->next=nullptr;
    //근데 next도 주소로 선언함.
    //node1 주소로 가서 봄. next칸을 봄. 여기에 또 다른 주소 적힘.
    //이번에는 물건을 보는게 아니라 주소를 보는거.
    Node* node3=new Node;
    node3->data=30;
    node3->next=nullptr;

    node1->next=node2;
    node2->next=node3;
    //주소에서 주소를 찾고 다른 주소를 매핑
    delete node1;
    delete node2;

    return 0;
}