#include <iostream>
#include <vector>
#include <algorithm> //sort, fill, unique, remove 용
#include <cstring> //memset 용

using namespace std;

struct Student {
    string name;
    int score;
};
//*는 주소록이거나 주소에서 물건 꺼내기
//&는 물건에서 주소 꺼내기
int main() {
    vector<vector<int>> matrix(5, vector<int>(5,0));
    memset(matrix[0].data(),0,sizeof(int)*matrix[0].size());
    //data() 이건 첫번째 값의 주소 반환해 내는거. &matrix[0][0] 했다고 보면 됨
    //memeset은 메모리주소를 넘겨줘야함
    //memset(대상 주소, 값, 바이트 크기) 바이트 단위로 메모리를 밀어버림
    //마지막에 바이트 크기는 행 하나의 사이즈만큼 integer을 곱한것
    //그니까 row하나를 초기화 시키고 싶은데 처음 주소에서 끝까지 미는 중
    fill(matrix[1].begin(),matrix[1].end(),-1);
    //fill(시작주소,끝주소,채우는값)

    vector<Student> v;
    v.reserve(100);
    //100개 자리 미리 예약하는거
    v.push_back({"Kim",20});

    vector<int> numbers={1,2,3,4,5,6,7};
    ////중복제거하기
    sort(numbers.begin(),numbers.end());
    //sort(시작주소,끝주소)
    numbers.erase(unique(numbers.begin(),numbers.end()),numbers.end());
    //중복된 원소를 뒤로 밀고, 그 시작 지점부터 끝까지 지움

    numbers.erase(remove(numbers.begin(),numbers.end(),3),numbers.end());
    //값이 3인 원소를 한 번에 지우고 싶을때
    //remove(시작,끝,3)이건 3이라는 숫자를 찾아서 뒤로 밀어버리고
    //쓸모있는 데이터가 끝나느 새로운 주소알려줌
    //erase(시작,끝)이건 그냥 메모리 싹뚝 자르는거
    //unique 이건 옆에 있는 애들이랑 똑같은 애들은 다 밀어버리고 이 데이터가
    //끝나는 지점 알려줌.. sort를 무조건 해야함.


    v.clear();
    v.shrink_to_fit();

    return 0;

}