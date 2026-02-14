#include <iostream>
#include <string>
using namespace std;
struct Target {
    int id;
    int value;
};
int main() {
    //코테에서 데이터 하나를 급하게 힙에 생성해야 할 때
    //'new'는 생성된 공간의 "주소"를 뱉어냄
    Target* t1=new Target;
    t1->id=1;
    t1->x=10;
    t1->y=20;

    //*이건 주소 불러내는거
    //주소를 들고 있을 땐 화살표 -> 이거 씀
    //& 주소 추출기
    //*는 선언할때는 주소만 저장. 사용할때는 들고있는 주소로 이동.역참조
    //->이건 주소를 들고 있을때 그 객체로 이동해서 바로 꺼내오는거 *랑 . 을 한번에 해줌.
    t1->id=1;
    t1->value=100;

    Target* t2=new Target{2,200};

    delete t1;
    delete t2;
}