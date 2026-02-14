#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Student {
    string name;
    int score;
    int age;

    Student(string n,int s, int a):name(n),score(s),age(a) {}

    bool operator<(const Student& other) const {

        if (this->score !=other.score) {
            return this->score>other.score;
        }
        if (this->age !=other.age) {
            return this->age < other.age;
        }
        return this->name <other.name;
    }
};

int main() {
    vector<Student> v;
    v.emplace_back("K",90,22);
    sort(v.begin(),v.end());
    for (const auto& s:v) {
        cout<<s.score<<s.age<<s.name;
    }
    return 0;
}
//그냥 이런게 잇구나 알아만 두자
