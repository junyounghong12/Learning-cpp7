// 2-(1)�����ڸ� �ߺ� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
#include <iostream>
#include <string>
using namespace std;

class Person {
	// ��� ����
	int id; 
	double weight;
	string name;
public:
	Person() { // �⺻ ������
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int id, string name) { // �Ű� ���� �ִ� ������
		this->id = id; // this ������ ���
		weight = 20.5;
		this->name = name; // this ������ ���
	}
	Person(int id, string name, double weight) { // �Ű� ���� �ִ� ������
		this->id = id; // this ������ ���
		this->weight = weight; // this ������ ���
		this->name = name; // this ������ ���
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	// ���
	grace.show();
	ashley.show();
	helen.show();
}