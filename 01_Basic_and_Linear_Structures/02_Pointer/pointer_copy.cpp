#include <iostream>
using namespace std;
void changeValue(int n) {
    n=100;
}
void changeRealValue(int* ptr) {
    *ptr=100;
}

int main() {
    int a=10;
    changeValue(a);
    cout<<a; //안변함
    changeRealValue(&a);
    cout<<a; //변함
    return 0;
}

//왜 복사본만 변하지? int a를 함수에 넘기면 컴퓨터는 원본을 가져가는게 아니라
//원본과 똑같은 값을 가진 새로운 복사본을 메모리의 다른 칸에 남김