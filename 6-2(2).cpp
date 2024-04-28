// 2-(2) 디폴트 매개 변수를 가진 하나의 생성자를 작성하고 프로그램을 완성하라.
#include<iostream>
#include<string>
using namespace std;

class Person {
    // 멤버 변수
    int id;
    double weight;
    string name;
public:
    Person(int id = 1, string name = "Grace", double weight = 20.5) { // 디폴트 매개 변수를 가진 생성자
        this->id = id; // this 포인터 사용
        this->weight = weight; // this 포인터 사용
        this->name = name; // this 포인터 사용
    }
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    // 출력
    grace.show();
    ashley.show();
    helen.show();
}
