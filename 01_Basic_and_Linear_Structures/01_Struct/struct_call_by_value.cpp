#include <iostream>
#include <string>
using namespace std;

struct Character {
    string name;
    int level;
    int hp;
};

void takeDamage(Character* c, int damage) {
    c-> hp-=damage;
}

int main() {
    Character hero={"서연", 1, 100};
    Character* ptr = &hero;
    ptr->level=2;
    takeDamage(&hero, 30);
    return 0;
}

//왜 *랑 &를 섞어서 쓰는가?
//&하면 데이터가 메모리 몇 번지에 있는지 주소값을 가져온다
//*는 주소를 담는 전용 변수

//차이점 파악
void healByValue(Character c) {
    c.hp +=10; //복사본의 피를 채워주고 원본은 그대로. 컴퓨터가 느려짐.
}

void healByPointer(Character* c) {
    c->hp+=10; //주소를 타고 가서 원본의 피를 채워줌
}

int main2() {
    Character hero={"전사",50};
    healByValue(hero);
    healByValue(&hero);
    return 0;
}
//Call by Value는 불필요한 메모리 복사가 발생하고 원본 수정이 불가함.
//포인터를 사용하면 메모리 효율을 극대화하고 원본 데이터를 직접 제어가 가능.
//중요한 데이터를 조회만 하거나 원본은 그대로 둔체 다양한 계산을 해보고 싶을 때 복사 방법 씀.