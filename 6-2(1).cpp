// 2-(1)생성자를 중복 작성하고 프로그램을 완성하라.
#include <iostream>
#include <string>
using namespace std;

class Person {
	// 멤버 변수
	int id; 
	double weight;
	string name;
public:
	Person() { // 기본 생성자
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int id, string name) { // 매개 변수 있는 생성자
		this->id = id; // this 포인터 사용
		weight = 20.5;
		this->name = name; // this 포인터 사용
	}
	Person(int id, string name, double weight) { // 매개 변수 있는 생성자
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